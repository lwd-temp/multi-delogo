/*
 * Copyright (C) 2018-2024 Werner Turing <werner.turing@protonmail.com>
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
#include <gtkmm.h>

#include "MultiDelogoAppWindow.hpp"
#include "MultiDelogoApp.hpp"

using namespace mdl;


MultiDelogoAppWindow::MultiDelogoAppWindow(BaseObjectType* cobject)
  : Gtk::ApplicationWindow(cobject)
{
}


Glib::RefPtr<MultiDelogoApp> MultiDelogoAppWindow::get_application()
{
  Glib::RefPtr<MultiDelogoApp> app
    = Glib::RefPtr<MultiDelogoApp>::cast_dynamic(ApplicationWindow::get_application());
  return app;
}


Glib::RefPtr<const MultiDelogoApp> MultiDelogoAppWindow::get_application() const
{
  Glib::RefPtr<const MultiDelogoApp> app
    = Glib::RefPtr<const MultiDelogoApp>::cast_dynamic(ApplicationWindow::get_application());
  return app;
}
