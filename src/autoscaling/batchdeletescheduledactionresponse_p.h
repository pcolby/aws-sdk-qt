// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETESCHEDULEDACTIONRESPONSE_P_H
#define QTAWS_BATCHDELETESCHEDULEDACTIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class BatchDeleteScheduledActionResponse;

class BatchDeleteScheduledActionResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit BatchDeleteScheduledActionResponsePrivate(BatchDeleteScheduledActionResponse * const q);

    void parseBatchDeleteScheduledActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteScheduledActionResponse)
    Q_DISABLE_COPY(BatchDeleteScheduledActionResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
