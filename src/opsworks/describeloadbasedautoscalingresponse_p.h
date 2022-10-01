// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBASEDAUTOSCALINGRESPONSE_P_H
#define QTAWS_DESCRIBELOADBASEDAUTOSCALINGRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeLoadBasedAutoScalingResponse;

class DescribeLoadBasedAutoScalingResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeLoadBasedAutoScalingResponsePrivate(DescribeLoadBasedAutoScalingResponse * const q);

    void parseDescribeLoadBasedAutoScalingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBasedAutoScalingResponse)
    Q_DISABLE_COPY(DescribeLoadBasedAutoScalingResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
