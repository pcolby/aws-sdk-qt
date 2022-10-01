// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONAGGREGATORSOURCESSTATUSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONAGGREGATORSOURCESSTATUSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconfigurationaggregatorsourcesstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationAggregatorSourcesStatusRequest;

class DescribeConfigurationAggregatorSourcesStatusRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConfigurationAggregatorSourcesStatusRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConfigurationAggregatorSourcesStatusRequest * const q);
    DescribeConfigurationAggregatorSourcesStatusRequestPrivate(const DescribeConfigurationAggregatorSourcesStatusRequestPrivate &other,
                                   DescribeConfigurationAggregatorSourcesStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationAggregatorSourcesStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
