// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBEREMEDIATIONCONFIGURATIONSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeremediationconfigurationsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationConfigurationsRequest;

class DescribeRemediationConfigurationsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeRemediationConfigurationsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeRemediationConfigurationsRequest * const q);
    DescribeRemediationConfigurationsRequestPrivate(const DescribeRemediationConfigurationsRequestPrivate &other,
                                   DescribeRemediationConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRemediationConfigurationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
