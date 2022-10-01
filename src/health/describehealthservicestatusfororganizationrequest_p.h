// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHEALTHSERVICESTATUSFORORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEHEALTHSERVICESTATUSFORORGANIZATIONREQUEST_P_H

#include "healthrequest_p.h"
#include "describehealthservicestatusfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeHealthServiceStatusForOrganizationRequest;

class DescribeHealthServiceStatusForOrganizationRequestPrivate : public HealthRequestPrivate {

public:
    DescribeHealthServiceStatusForOrganizationRequestPrivate(const HealthRequest::Action action,
                                   DescribeHealthServiceStatusForOrganizationRequest * const q);
    DescribeHealthServiceStatusForOrganizationRequestPrivate(const DescribeHealthServiceStatusForOrganizationRequestPrivate &other,
                                   DescribeHealthServiceStatusForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHealthServiceStatusForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
