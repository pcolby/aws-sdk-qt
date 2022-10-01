/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTKEYSPACESREQUEST_P_H
#define QTAWS_LISTKEYSPACESREQUEST_P_H

#include "keyspacesrequest_p.h"
#include "listkeyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class ListKeyspacesRequest;

class ListKeyspacesRequestPrivate : public KeyspacesRequestPrivate {

public:
    ListKeyspacesRequestPrivate(const KeyspacesRequest::Action action,
                                   ListKeyspacesRequest * const q);
    ListKeyspacesRequestPrivate(const ListKeyspacesRequestPrivate &other,
                                   ListKeyspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKeyspacesRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
