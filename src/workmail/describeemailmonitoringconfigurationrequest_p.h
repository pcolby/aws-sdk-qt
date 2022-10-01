// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEMAILMONITORINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEEMAILMONITORINGCONFIGURATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "describeemailmonitoringconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeEmailMonitoringConfigurationRequest;

class DescribeEmailMonitoringConfigurationRequestPrivate : public WorkMailRequestPrivate {

public:
    DescribeEmailMonitoringConfigurationRequestPrivate(const WorkMailRequest::Action action,
                                   DescribeEmailMonitoringConfigurationRequest * const q);
    DescribeEmailMonitoringConfigurationRequestPrivate(const DescribeEmailMonitoringConfigurationRequestPrivate &other,
                                   DescribeEmailMonitoringConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEmailMonitoringConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
