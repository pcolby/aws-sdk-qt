// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECRAWLERRESPONSE_P_H
#define QTAWS_CREATECRAWLERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateCrawlerResponse;

class CreateCrawlerResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateCrawlerResponsePrivate(CreateCrawlerResponse * const q);

    void parseCreateCrawlerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCrawlerResponse)
    Q_DISABLE_COPY(CreateCrawlerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
