// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDACTIONRESPONSE_P_H
#define QTAWS_DELETESCHEDULEDACTIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DeleteScheduledActionResponse;

class DeleteScheduledActionResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DeleteScheduledActionResponsePrivate(DeleteScheduledActionResponse * const q);

    void parseDeleteScheduledActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScheduledActionResponse)
    Q_DISABLE_COPY(DeleteScheduledActionResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
