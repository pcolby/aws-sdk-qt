// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBSERVABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEOBSERVABILITYCONFIGURATIONREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "describeobservabilityconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeObservabilityConfigurationRequest;

class DescribeObservabilityConfigurationRequestPrivate : public AppRunnerRequestPrivate {

public:
    DescribeObservabilityConfigurationRequestPrivate(const AppRunnerRequest::Action action,
                                   DescribeObservabilityConfigurationRequest * const q);
    DescribeObservabilityConfigurationRequestPrivate(const DescribeObservabilityConfigurationRequestPrivate &other,
                                   DescribeObservabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeObservabilityConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
