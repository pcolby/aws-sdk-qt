// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCRAWLERSCHEDULERESPONSE_P_H
#define QTAWS_STARTCRAWLERSCHEDULERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartCrawlerScheduleResponse;

class StartCrawlerScheduleResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartCrawlerScheduleResponsePrivate(StartCrawlerScheduleResponse * const q);

    void parseStartCrawlerScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCrawlerScheduleResponse)
    Q_DISABLE_COPY(StartCrawlerScheduleResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
