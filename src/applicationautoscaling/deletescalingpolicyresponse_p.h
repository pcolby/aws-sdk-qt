// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCALINGPOLICYRESPONSE_P_H
#define QTAWS_DELETESCALINGPOLICYRESPONSE_P_H

#include "applicationautoscalingresponse_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeleteScalingPolicyResponse;

class DeleteScalingPolicyResponsePrivate : public ApplicationAutoScalingResponsePrivate {

public:

    explicit DeleteScalingPolicyResponsePrivate(DeleteScalingPolicyResponse * const q);

    void parseDeleteScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScalingPolicyResponse)
    Q_DISABLE_COPY(DeleteScalingPolicyResponsePrivate)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
