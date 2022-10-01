// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETELIFECYCLEACTIONRESPONSE_P_H
#define QTAWS_COMPLETELIFECYCLEACTIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class CompleteLifecycleActionResponse;

class CompleteLifecycleActionResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit CompleteLifecycleActionResponsePrivate(CompleteLifecycleActionResponse * const q);

    void parseCompleteLifecycleActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CompleteLifecycleActionResponse)
    Q_DISABLE_COPY(CompleteLifecycleActionResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
