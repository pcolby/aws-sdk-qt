// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVGWROUTEPROPAGATIONREQUEST_P_H
#define QTAWS_DISABLEVGWROUTEPROPAGATIONREQUEST_P_H

#include "ec2request_p.h"
#include "disablevgwroutepropagationrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableVgwRoutePropagationRequest;

class DisableVgwRoutePropagationRequestPrivate : public Ec2RequestPrivate {

public:
    DisableVgwRoutePropagationRequestPrivate(const Ec2Request::Action action,
                                   DisableVgwRoutePropagationRequest * const q);
    DisableVgwRoutePropagationRequestPrivate(const DisableVgwRoutePropagationRequestPrivate &other,
                                   DisableVgwRoutePropagationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableVgwRoutePropagationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
