// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCRAWLERRESPONSE_P_H
#define QTAWS_STOPCRAWLERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StopCrawlerResponse;

class StopCrawlerResponsePrivate : public GlueResponsePrivate {

public:

    explicit StopCrawlerResponsePrivate(StopCrawlerResponse * const q);

    void parseStopCrawlerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopCrawlerResponse)
    Q_DISABLE_COPY(StopCrawlerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
