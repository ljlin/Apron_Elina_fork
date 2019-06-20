inline zonotope_manager::zonotope_manager()
        : manager(zonotope_manager_alloc())
{}

inline manager& zonotope_manager::operator=(const manager& m)
{
        return manager::operator=(m);
}
