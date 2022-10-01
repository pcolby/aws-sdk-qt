// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEDULEDUPDATEGROUPACTIONRESPONSE_P_H
#define QTAWS_PUTSCHEDULEDUPDATEGROUPACTIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class PutScheduledUpdateGroupActionResponse;

class PutScheduledUpdateGroupActionResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit PutScheduledUpdateGroupActionResponsePrivate(PutScheduledUpdateGroupActionResponse * const q);

    void parsePutScheduledUpdateGroupActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutScheduledUpdateGroupActionResponse)
    Q_DISABLE_COPY(PutScheduledUpdateGroupActionResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
