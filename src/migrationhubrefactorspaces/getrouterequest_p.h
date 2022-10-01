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

#ifndef QTAWS_GETROUTEREQUEST_P_H
#define QTAWS_GETROUTEREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "getrouterequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetRouteRequest;

class GetRouteRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    GetRouteRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   GetRouteRequest * const q);
    GetRouteRequestPrivate(const GetRouteRequestPrivate &other,
                                   GetRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRouteRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
