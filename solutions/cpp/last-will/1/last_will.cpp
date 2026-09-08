// Enter your code below the lines of the families' information

// Secret knowledge of the Zhang family:
namespace zhang {
int bank_number_part(int secret_modifier) {
    int zhang_part{8'541};
    return (zhang_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 512; }
}  // namespace red
namespace blue {
int code_fragment() { return 677; }
}  // namespace blue
}  // namespace zhang

// Secret knowledge of the Khan family:
namespace khan {
int bank_number_part(int secret_modifier) {
    int khan_part{4'142};
    return (khan_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 148; }
}  // namespace red
namespace blue {
int code_fragment() { return 875; }
}  // namespace blue
}  // namespace khan

// Secret knowledge of the Garcia family:
namespace garcia {
int bank_number_part(int secret_modifier) {
    int garcia_part{4'023};
    return (garcia_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 118; }
}  // namespace red
namespace blue {
int code_fragment() { return 923; }
}  // namespace blue
}  // namespace garcia

// Enter your code below

namespace estate_executor {
    int assemble_account_number(int secret_modifier) {
        int ans {0};
        ans += garcia::bank_number_part(secret_modifier);
        ans += khan::bank_number_part(secret_modifier);
        ans += zhang::bank_number_part(secret_modifier);

        return ans;
    }

    int assemble_code() {
        int cb {0};
        int cr {0};

        cb += garcia::blue::code_fragment();
        cb += khan::blue::code_fragment();
        cb += zhang::blue::code_fragment();

        cr += garcia::red::code_fragment();
        cr += khan::red::code_fragment();
        cr += zhang::red::code_fragment();
        
        return cb * cr;
    }
}
