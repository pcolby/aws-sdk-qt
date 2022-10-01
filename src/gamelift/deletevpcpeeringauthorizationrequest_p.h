// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGAUTHORIZATIONREQUEST_P_H
#define QTAWS_DELETEVPCPEERINGAUTHORIZATIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletevpcpeeringauthorizationrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteVpcPeeringAuthorizationRequest;

class DeleteVpcPeeringAuthorizationRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteVpcPeeringAuthorizationRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteVpcPeeringAuthorizationRequest * const q);
    DeleteVpcPeeringAuthorizationRequestPrivate(const DeleteVpcPeeringAuthorizationRequestPrivate &other,
                                   DeleteVpcPeeringAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcPeeringAuthorizationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
