/*
 * Copyright (C) 2018 Werner Turing <werner.turing@protonmail.com>
 *
 * This file is part of multi-delogo.
 *
 * multi-delogo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * multi-delogo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with multi-delogo.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <glibmm/objectbase.h>
#include <glibmm/object.h>
#include <gtkmm/treepath.h>
#include <gtkmm/treemodel.h>

#include "filter-generator/FilterList.hpp"

#include "FilterListModel.hpp"

using namespace mdl;


FilterListModel::FilterListModel(fg::FilterList& filter_list)
  : Glib::ObjectBase(typeid(FilterListModel))
  , Glib::Object()
  , filter_list_(filter_list)
{
}


FilterListModel::~FilterListModel()
{
}


Glib::RefPtr<FilterListModel> FilterListModel::create(fg::FilterList& filter_list)
{
  return Glib::RefPtr<FilterListModel>(new FilterListModel(filter_list));
}


Gtk::TreeModelFlags FilterListModel::get_flags_vfunc() const
{
  return Gtk::TREE_MODEL_LIST_ONLY;
}


int FilterListModel::get_n_columns_vfunc() const
{
  throw "not implemented";
}


GType FilterListModel::get_column_type_vfunc(int index) const
{
  throw "not implemented";
}


void FilterListModel::get_value_vfunc(const TreeModel::const_iterator& iter, int column, Glib::ValueBase& value) const
{
  throw "not implemented";
}


bool FilterListModel::iter_next_vfunc(const iterator& iter, iterator& iter_next) const
{
  throw "not implemented";
}


bool FilterListModel::iter_children_vfunc(const iterator& parent, iterator& iter) const
{
  throw "not implemented";
}


bool FilterListModel::iter_has_child_vfunc(const const_iterator& iter) const
{
  throw "not implemented";
}


int FilterListModel::iter_n_children_vfunc(const const_iterator& iter) const
{
  throw "not implemented";
}


int FilterListModel::iter_n_root_children_vfunc() const
{
  throw "not implemented";
}


bool FilterListModel::iter_nth_child_vfunc(const iterator& parent, int n, iterator& iter) const
{
  throw "not implemented";
}


bool FilterListModel::iter_nth_root_child_vfunc(int n, iterator& iter) const
{
  throw "not implemented";
}


bool FilterListModel::iter_parent_vfunc(const iterator& child, iterator& iter) const
{
  throw "not implemented";
}

Gtk::TreeModel::Path FilterListModel::get_path_vfunc(const const_iterator& iter) const
{
  throw "not implemented";
}


bool FilterListModel::get_iter_vfunc(const Path& path, iterator& iter) const
{
  throw "not implemented";
}
