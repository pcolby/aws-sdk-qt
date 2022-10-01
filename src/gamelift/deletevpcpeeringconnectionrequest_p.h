// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGCONNECTIONREQUEST_P_H
#define QTAWS_DELETEVPCPEERINGCONNECTIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletevpcpeeringconnectionrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteVpcPeeringConnectionRequest;

class DeleteVpcPeeringConnectionRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteVpcPeeringConnectionRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteVpcPeeringConnectionRequest * const q);
    DeleteVpcPeeringConnectionRequestPrivate(const DeleteVpcPeeringConnectionRequestPrivate &other,
                                   DeleteVpcPeeringConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcPeeringConnectionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
