// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRAWLERSRESPONSE_H
#define QTAWS_LISTCRAWLERSRESPONSE_H

#include "glueresponse.h"
#include "listcrawlersrequest.h"

namespace QtAws {
namespace Glue {

class ListCrawlersResponsePrivate;

class QTAWSGLUE_EXPORT ListCrawlersResponse : public GlueResponse {
    Q_OBJECT

public:
    ListCrawlersResponse(const ListCrawlersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCrawlersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCrawlersResponse)
    Q_DISABLE_COPY(ListCrawlersResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
