// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBELAUNCHCONFIGURATIONSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLaunchConfigurationsResponse;

class DescribeLaunchConfigurationsResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeLaunchConfigurationsResponsePrivate(DescribeLaunchConfigurationsResponse * const q);

    void parseDescribeLaunchConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLaunchConfigurationsResponse)
    Q_DISABLE_COPY(DescribeLaunchConfigurationsResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
