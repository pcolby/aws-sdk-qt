// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPOSITEALARMRESPONSE_P_H
#define QTAWS_PUTCOMPOSITEALARMRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class PutCompositeAlarmResponse;

class PutCompositeAlarmResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit PutCompositeAlarmResponsePrivate(PutCompositeAlarmResponse * const q);

    void parsePutCompositeAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutCompositeAlarmResponse)
    Q_DISABLE_COPY(PutCompositeAlarmResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
