// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEAUTOSCALINGCONFIGURATIONRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DescribeAutoScalingConfigurationResponse;

class DescribeAutoScalingConfigurationResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DescribeAutoScalingConfigurationResponsePrivate(DescribeAutoScalingConfigurationResponse * const q);

    void parseDescribeAutoScalingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAutoScalingConfigurationResponse)
    Q_DISABLE_COPY(DescribeAutoScalingConfigurationResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
