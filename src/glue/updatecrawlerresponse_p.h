// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRAWLERRESPONSE_P_H
#define QTAWS_UPDATECRAWLERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateCrawlerResponse;

class UpdateCrawlerResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateCrawlerResponsePrivate(UpdateCrawlerResponse * const q);

    void parseUpdateCrawlerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCrawlerResponse)
    Q_DISABLE_COPY(UpdateCrawlerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
