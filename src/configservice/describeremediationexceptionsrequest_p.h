// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONEXCEPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEREMEDIATIONEXCEPTIONSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeremediationexceptionsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationExceptionsRequest;

class DescribeRemediationExceptionsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeRemediationExceptionsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeRemediationExceptionsRequest * const q);
    DescribeRemediationExceptionsRequestPrivate(const DescribeRemediationExceptionsRequestPrivate &other,
                                   DescribeRemediationExceptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRemediationExceptionsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
