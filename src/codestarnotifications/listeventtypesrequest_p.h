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

#ifndef QTAWS_LISTEVENTTYPESREQUEST_P_H
#define QTAWS_LISTEVENTTYPESREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "listeventtypesrequest.h"

namespace QtAws {
namespace CodeStarNotifications {

class ListEventTypesRequest;

class QTAWS_EXPORT ListEventTypesRequestPrivate : public CodeStarNotificationsRequestPrivate {

public:
    ListEventTypesRequestPrivate(const CodeStarNotificationsRequest::Action action,
                                   ListEventTypesRequest * const q);
    ListEventTypesRequestPrivate(const ListEventTypesRequestPrivate &other,
                                   ListEventTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventTypesRequest)

};

} // namespace CodeStarNotifications
} // namespace QtAws

#endif
