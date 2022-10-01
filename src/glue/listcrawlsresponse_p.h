// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRAWLSRESPONSE_P_H
#define QTAWS_LISTCRAWLSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListCrawlsResponse;

class ListCrawlsResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListCrawlsResponsePrivate(ListCrawlsResponse * const q);

    void parseListCrawlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCrawlsResponse)
    Q_DISABLE_COPY(ListCrawlsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
