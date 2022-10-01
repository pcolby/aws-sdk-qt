// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECRAWLERRESPONSE_P_H
#define QTAWS_DELETECRAWLERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteCrawlerResponse;

class DeleteCrawlerResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteCrawlerResponsePrivate(DeleteCrawlerResponse * const q);

    void parseDeleteCrawlerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCrawlerResponse)
    Q_DISABLE_COPY(DeleteCrawlerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
