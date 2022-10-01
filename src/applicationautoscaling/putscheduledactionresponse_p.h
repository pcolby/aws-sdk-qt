// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEDULEDACTIONRESPONSE_P_H
#define QTAWS_PUTSCHEDULEDACTIONRESPONSE_P_H

#include "applicationautoscalingresponse_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class PutScheduledActionResponse;

class PutScheduledActionResponsePrivate : public ApplicationAutoScalingResponsePrivate {

public:

    explicit PutScheduledActionResponsePrivate(PutScheduledActionResponse * const q);

    void parsePutScheduledActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutScheduledActionResponse)
    Q_DISABLE_COPY(PutScheduledActionResponsePrivate)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
