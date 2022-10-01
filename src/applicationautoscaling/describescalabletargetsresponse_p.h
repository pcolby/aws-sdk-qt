// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALABLETARGETSRESPONSE_P_H
#define QTAWS_DESCRIBESCALABLETARGETSRESPONSE_P_H

#include "applicationautoscalingresponse_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScalableTargetsResponse;

class DescribeScalableTargetsResponsePrivate : public ApplicationAutoScalingResponsePrivate {

public:

    explicit DescribeScalableTargetsResponsePrivate(DescribeScalableTargetsResponse * const q);

    void parseDescribeScalableTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScalableTargetsResponse)
    Q_DISABLE_COPY(DescribeScalableTargetsResponsePrivate)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
