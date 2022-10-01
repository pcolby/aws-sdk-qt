// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
