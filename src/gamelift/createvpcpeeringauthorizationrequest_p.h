// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGAUTHORIZATIONREQUEST_P_H
#define QTAWS_CREATEVPCPEERINGAUTHORIZATIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "createvpcpeeringauthorizationrequest.h"

namespace QtAws {
namespace GameLift {

class CreateVpcPeeringAuthorizationRequest;

class CreateVpcPeeringAuthorizationRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateVpcPeeringAuthorizationRequestPrivate(const GameLiftRequest::Action action,
                                   CreateVpcPeeringAuthorizationRequest * const q);
    CreateVpcPeeringAuthorizationRequestPrivate(const CreateVpcPeeringAuthorizationRequestPrivate &other,
                                   CreateVpcPeeringAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcPeeringAuthorizationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
