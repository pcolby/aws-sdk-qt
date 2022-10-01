// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCALINGPOLICYRESPONSE_P_H
#define QTAWS_PUTSCALINGPOLICYRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class PutScalingPolicyResponse;

class PutScalingPolicyResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit PutScalingPolicyResponsePrivate(PutScalingPolicyResponse * const q);

    void parsePutScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutScalingPolicyResponse)
    Q_DISABLE_COPY(PutScalingPolicyResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
