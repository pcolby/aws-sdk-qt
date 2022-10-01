// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLOGGINGRESPONSE_P_H
#define QTAWS_STARTLOGGINGRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class StartLoggingResponse;

class StartLoggingResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit StartLoggingResponsePrivate(StartLoggingResponse * const q);

    void parseStartLoggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartLoggingResponse)
    Q_DISABLE_COPY(StartLoggingResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
