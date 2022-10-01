// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBECOMPONENTCONFIGURATIONREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "describecomponentconfigurationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentConfigurationRequest;

class DescribeComponentConfigurationRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DescribeComponentConfigurationRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DescribeComponentConfigurationRequest * const q);
    DescribeComponentConfigurationRequestPrivate(const DescribeComponentConfigurationRequestPrivate &other,
                                   DescribeComponentConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeComponentConfigurationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
