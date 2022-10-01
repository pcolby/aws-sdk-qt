// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEHOOKRESPONSE_P_H
#define QTAWS_PUTLIFECYCLEHOOKRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class PutLifecycleHookResponse;

class PutLifecycleHookResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit PutLifecycleHookResponsePrivate(PutLifecycleHookResponse * const q);

    void parsePutLifecycleHookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLifecycleHookResponse)
    Q_DISABLE_COPY(PutLifecycleHookResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
