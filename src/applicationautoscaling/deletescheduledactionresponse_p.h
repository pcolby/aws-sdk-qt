// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDACTIONRESPONSE_P_H
#define QTAWS_DELETESCHEDULEDACTIONRESPONSE_P_H

#include "applicationautoscalingresponse_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeleteScheduledActionResponse;

class DeleteScheduledActionResponsePrivate : public ApplicationAutoScalingResponsePrivate {

public:

    explicit DeleteScheduledActionResponsePrivate(DeleteScheduledActionResponse * const q);

    void parseDeleteScheduledActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScheduledActionResponse)
    Q_DISABLE_COPY(DeleteScheduledActionResponsePrivate)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
