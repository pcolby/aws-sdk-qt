// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCALINGPOLICYRESPONSE_P_H
#define QTAWS_DELETESCALINGPOLICYRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteScalingPolicyResponse;

class DeleteScalingPolicyResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteScalingPolicyResponsePrivate(DeleteScalingPolicyResponse * const q);

    void parseDeleteScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScalingPolicyResponse)
    Q_DISABLE_COPY(DeleteScalingPolicyResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
