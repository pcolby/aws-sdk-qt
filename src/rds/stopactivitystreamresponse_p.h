// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPACTIVITYSTREAMRESPONSE_P_H
#define QTAWS_STOPACTIVITYSTREAMRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class StopActivityStreamResponse;

class StopActivityStreamResponsePrivate : public RdsResponsePrivate {

public:

    explicit StopActivityStreamResponsePrivate(StopActivityStreamResponse * const q);

    void parseStopActivityStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopActivityStreamResponse)
    Q_DISABLE_COPY(StopActivityStreamResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
