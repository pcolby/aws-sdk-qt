// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTYPEREQUEST_P_H
#define QTAWS_DEREGISTERTYPEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "deregistertyperequest.h"

namespace QtAws {
namespace CloudFormation {

class DeregisterTypeRequest;

class DeregisterTypeRequestPrivate : public CloudFormationRequestPrivate {

public:
    DeregisterTypeRequestPrivate(const CloudFormationRequest::Action action,
                                   DeregisterTypeRequest * const q);
    DeregisterTypeRequestPrivate(const DeregisterTypeRequestPrivate &other,
                                   DeregisterTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
