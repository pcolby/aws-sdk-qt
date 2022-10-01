// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGCONNECTIONREQUEST_P_H
#define QTAWS_CREATEVPCPEERINGCONNECTIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "createvpcpeeringconnectionrequest.h"

namespace QtAws {
namespace GameLift {

class CreateVpcPeeringConnectionRequest;

class CreateVpcPeeringConnectionRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateVpcPeeringConnectionRequestPrivate(const GameLiftRequest::Action action,
                                   CreateVpcPeeringConnectionRequest * const q);
    CreateVpcPeeringConnectionRequestPrivate(const CreateVpcPeeringConnectionRequestPrivate &other,
                                   CreateVpcPeeringConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcPeeringConnectionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
