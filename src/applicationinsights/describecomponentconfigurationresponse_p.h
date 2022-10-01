// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBECOMPONENTCONFIGURATIONRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentConfigurationResponse;

class DescribeComponentConfigurationResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DescribeComponentConfigurationResponsePrivate(DescribeComponentConfigurationResponse * const q);

    void parseDescribeComponentConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeComponentConfigurationResponse)
    Q_DISABLE_COPY(DescribeComponentConfigurationResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
