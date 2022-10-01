// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVGWROUTEPROPAGATIONREQUEST_P_H
#define QTAWS_ENABLEVGWROUTEPROPAGATIONREQUEST_P_H

#include "ec2request_p.h"
#include "enablevgwroutepropagationrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableVgwRoutePropagationRequest;

class EnableVgwRoutePropagationRequestPrivate : public Ec2RequestPrivate {

public:
    EnableVgwRoutePropagationRequestPrivate(const Ec2Request::Action action,
                                   EnableVgwRoutePropagationRequest * const q);
    EnableVgwRoutePropagationRequestPrivate(const EnableVgwRoutePropagationRequestPrivate &other,
                                   EnableVgwRoutePropagationRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableVgwRoutePropagationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
