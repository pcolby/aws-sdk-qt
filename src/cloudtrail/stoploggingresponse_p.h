// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLOGGINGRESPONSE_P_H
#define QTAWS_STOPLOGGINGRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class StopLoggingResponse;

class StopLoggingResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit StopLoggingResponsePrivate(StopLoggingResponse * const q);

    void parseStopLoggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopLoggingResponse)
    Q_DISABLE_COPY(StopLoggingResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
