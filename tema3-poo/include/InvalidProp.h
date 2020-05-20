#include <exception>

class InvalidProp : public std::exception {
public:
  InvalidProp () noexcept {}
  InvalidProp (const InvalidProp&) noexcept = default;
  InvalidProp& operator= (const InvalidProp&) noexcept = default;
  virtual ~InvalidProp() noexcept = default;
  virtual const char* what() const noexcept {
    return "Tip Invalid de Proprietate";
  }
};
