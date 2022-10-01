// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRAWLERSRESPONSE_P_H
#define QTAWS_LISTCRAWLERSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListCrawlersResponse;

class ListCrawlersResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListCrawlersResponsePrivate(ListCrawlersResponse * const q);

    void parseListCrawlersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCrawlersResponse)
    Q_DISABLE_COPY(ListCrawlersResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
