namespace sapien {
enum sample_type { positive, negative };

template <class T> class configurer {
public:
  virtual void add_sample(sample_type sample_type, T sample) = 0;
  T get_active_model();

private:
  T generic_model;
  T specific_model;
  bool has_converged();
};

} // namespace sapien
