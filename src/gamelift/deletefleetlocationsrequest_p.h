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

#ifndef QTAWS_DELETEFLEETLOCATIONSREQUEST_P_H
#define QTAWS_DELETEFLEETLOCATIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletefleetlocationsrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteFleetLocationsRequest;

class DeleteFleetLocationsRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteFleetLocationsRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteFleetLocationsRequest * const q);
    DeleteFleetLocationsRequestPrivate(const DeleteFleetLocationsRequestPrivate &other,
                                   DeleteFleetLocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFleetLocationsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
