// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERSRESPONSE_P_H
#define QTAWS_GETCRAWLERSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetCrawlersResponse;

class GetCrawlersResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetCrawlersResponsePrivate(GetCrawlersResponse * const q);

    void parseGetCrawlersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCrawlersResponse)
    Q_DISABLE_COPY(GetCrawlersResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
