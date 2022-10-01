// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRAWLERSCHEDULERESPONSE_P_H
#define QTAWS_UPDATECRAWLERSCHEDULERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateCrawlerScheduleResponse;

class UpdateCrawlerScheduleResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateCrawlerScheduleResponsePrivate(UpdateCrawlerScheduleResponse * const q);

    void parseUpdateCrawlerScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCrawlerScheduleResponse)
    Q_DISABLE_COPY(UpdateCrawlerScheduleResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
