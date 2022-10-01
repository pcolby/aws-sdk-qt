// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCRAWLERRESPONSE_P_H
#define QTAWS_STARTCRAWLERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartCrawlerResponse;

class StartCrawlerResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartCrawlerResponsePrivate(StartCrawlerResponse * const q);

    void parseStartCrawlerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCrawlerResponse)
    Q_DISABLE_COPY(StartCrawlerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
