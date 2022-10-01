// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERSRESPONSE_H
#define QTAWS_GETCRAWLERSRESPONSE_H

#include "glueresponse.h"
#include "getcrawlersrequest.h"

namespace QtAws {
namespace Glue {

class GetCrawlersResponsePrivate;

class QTAWSGLUE_EXPORT GetCrawlersResponse : public GlueResponse {
    Q_OBJECT

public:
    GetCrawlersResponse(const GetCrawlersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCrawlersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCrawlersResponse)
    Q_DISABLE_COPY(GetCrawlersResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
