// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEDICATEDIPPOOLREQUEST_P_H
#define QTAWS_CREATEDEDICATEDIPPOOLREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "creatededicatedippoolrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateDedicatedIpPoolRequest;

class CreateDedicatedIpPoolRequestPrivate : public PinpointEmailRequestPrivate {

public:
    CreateDedicatedIpPoolRequestPrivate(const PinpointEmailRequest::Action action,
                                   CreateDedicatedIpPoolRequest * const q);
    CreateDedicatedIpPoolRequestPrivate(const CreateDedicatedIpPoolRequestPrivate &other,
                                   CreateDedicatedIpPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDedicatedIpPoolRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
