// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEREMEDIATIONCONFIGURATIONSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationConfigurationsResponse;

class DescribeRemediationConfigurationsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeRemediationConfigurationsResponsePrivate(DescribeRemediationConfigurationsResponse * const q);

    void parseDescribeRemediationConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRemediationConfigurationsResponse)
    Q_DISABLE_COPY(DescribeRemediationConfigurationsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
