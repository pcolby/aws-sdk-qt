// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTSCHEDULEDUPDATEGROUPACTIONRESPONSE_P_H
#define QTAWS_BATCHPUTSCHEDULEDUPDATEGROUPACTIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class BatchPutScheduledUpdateGroupActionResponse;

class BatchPutScheduledUpdateGroupActionResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit BatchPutScheduledUpdateGroupActionResponsePrivate(BatchPutScheduledUpdateGroupActionResponse * const q);

    void parseBatchPutScheduledUpdateGroupActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchPutScheduledUpdateGroupActionResponse)
    Q_DISABLE_COPY(BatchPutScheduledUpdateGroupActionResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
