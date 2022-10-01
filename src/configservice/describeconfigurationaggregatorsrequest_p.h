// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONAGGREGATORSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONAGGREGATORSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconfigurationaggregatorsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationAggregatorsRequest;

class DescribeConfigurationAggregatorsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConfigurationAggregatorsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConfigurationAggregatorsRequest * const q);
    DescribeConfigurationAggregatorsRequestPrivate(const DescribeConfigurationAggregatorsRequestPrivate &other,
                                   DescribeConfigurationAggregatorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationAggregatorsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
