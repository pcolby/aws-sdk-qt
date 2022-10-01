// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "describeconfigurationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeConfigurationsRequest;

class DescribeConfigurationsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    DescribeConfigurationsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   DescribeConfigurationsRequest * const q);
    DescribeConfigurationsRequestPrivate(const DescribeConfigurationsRequestPrivate &other,
                                   DescribeConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
