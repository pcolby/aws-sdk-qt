// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPUBLISHERREQUEST_P_H
#define QTAWS_REGISTERPUBLISHERREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "registerpublisherrequest.h"

namespace QtAws {
namespace CloudFormation {

class RegisterPublisherRequest;

class RegisterPublisherRequestPrivate : public CloudFormationRequestPrivate {

public:
    RegisterPublisherRequestPrivate(const CloudFormationRequest::Action action,
                                   RegisterPublisherRequest * const q);
    RegisterPublisherRequestPrivate(const RegisterPublisherRequestPrivate &other,
                                   RegisterPublisherRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterPublisherRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
