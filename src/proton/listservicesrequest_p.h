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

#ifndef QTAWS_LISTSERVICESREQUEST_P_H
#define QTAWS_LISTSERVICESREQUEST_P_H

#include "protonrequest_p.h"
#include "listservicesrequest.h"

namespace QtAws {
namespace Proton {

class ListServicesRequest;

class QTAWS_EXPORT ListServicesRequestPrivate : public ProtonRequestPrivate {

public:
    ListServicesRequestPrivate(const ProtonRequest::Action action,
                                   ListServicesRequest * const q);
    ListServicesRequestPrivate(const ListServicesRequestPrivate &other,
                                   ListServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServicesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
