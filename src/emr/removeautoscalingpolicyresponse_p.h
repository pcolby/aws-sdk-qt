// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAUTOSCALINGPOLICYRESPONSE_P_H
#define QTAWS_REMOVEAUTOSCALINGPOLICYRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class RemoveAutoScalingPolicyResponse;

class RemoveAutoScalingPolicyResponsePrivate : public EmrResponsePrivate {

public:

    explicit RemoveAutoScalingPolicyResponsePrivate(RemoveAutoScalingPolicyResponse * const q);

    void parseRemoveAutoScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveAutoScalingPolicyResponse)
    Q_DISABLE_COPY(RemoveAutoScalingPolicyResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
