// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMEBASEDAUTOSCALINGRESPONSE_P_H
#define QTAWS_DESCRIBETIMEBASEDAUTOSCALINGRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeTimeBasedAutoScalingResponse;

class DescribeTimeBasedAutoScalingResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeTimeBasedAutoScalingResponsePrivate(DescribeTimeBasedAutoScalingResponse * const q);

    void parseDescribeTimeBasedAutoScalingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTimeBasedAutoScalingResponse)
    Q_DISABLE_COPY(DescribeTimeBasedAutoScalingResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
