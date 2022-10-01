// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETLOCATIONSREQUEST_P_H
#define QTAWS_CREATEFLEETLOCATIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "createfleetlocationsrequest.h"

namespace QtAws {
namespace GameLift {

class CreateFleetLocationsRequest;

class CreateFleetLocationsRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateFleetLocationsRequestPrivate(const GameLiftRequest::Action action,
                                   CreateFleetLocationsRequest * const q);
    CreateFleetLocationsRequestPrivate(const CreateFleetLocationsRequestPrivate &other,
                                   CreateFleetLocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFleetLocationsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
