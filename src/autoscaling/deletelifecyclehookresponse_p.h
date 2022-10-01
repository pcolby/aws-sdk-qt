// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIFECYCLEHOOKRESPONSE_P_H
#define QTAWS_DELETELIFECYCLEHOOKRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DeleteLifecycleHookResponse;

class DeleteLifecycleHookResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DeleteLifecycleHookResponsePrivate(DeleteLifecycleHookResponse * const q);

    void parseDeleteLifecycleHookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLifecycleHookResponse)
    Q_DISABLE_COPY(DeleteLifecycleHookResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
