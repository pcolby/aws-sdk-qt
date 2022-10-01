// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEMAILMONITORINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEEMAILMONITORINGCONFIGURATIONRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DescribeEmailMonitoringConfigurationResponse;

class DescribeEmailMonitoringConfigurationResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DescribeEmailMonitoringConfigurationResponsePrivate(DescribeEmailMonitoringConfigurationResponse * const q);

    void parseDescribeEmailMonitoringConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEmailMonitoringConfigurationResponse)
    Q_DISABLE_COPY(DescribeEmailMonitoringConfigurationResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
