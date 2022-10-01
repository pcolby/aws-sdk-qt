// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERRESPONSE_P_H
#define QTAWS_GETCRAWLERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetCrawlerResponse;

class GetCrawlerResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetCrawlerResponsePrivate(GetCrawlerResponse * const q);

    void parseGetCrawlerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCrawlerResponse)
    Q_DISABLE_COPY(GetCrawlerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
