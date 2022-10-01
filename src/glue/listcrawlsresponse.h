// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRAWLSRESPONSE_H
#define QTAWS_LISTCRAWLSRESPONSE_H

#include "glueresponse.h"
#include "listcrawlsrequest.h"

namespace QtAws {
namespace Glue {

class ListCrawlsResponsePrivate;

class QTAWSGLUE_EXPORT ListCrawlsResponse : public GlueResponse {
    Q_OBJECT

public:
    ListCrawlsResponse(const ListCrawlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCrawlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCrawlsResponse)
    Q_DISABLE_COPY(ListCrawlsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
