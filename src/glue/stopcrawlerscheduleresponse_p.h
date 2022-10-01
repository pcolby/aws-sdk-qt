// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCRAWLERSCHEDULERESPONSE_P_H
#define QTAWS_STOPCRAWLERSCHEDULERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StopCrawlerScheduleResponse;

class StopCrawlerScheduleResponsePrivate : public GlueResponsePrivate {

public:

    explicit StopCrawlerScheduleResponsePrivate(StopCrawlerScheduleResponse * const q);

    void parseStopCrawlerScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopCrawlerScheduleResponse)
    Q_DISABLE_COPY(StopCrawlerScheduleResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
