// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRAWLERRESPONSE_H
#define QTAWS_GETCRAWLERRESPONSE_H

#include "glueresponse.h"
#include "getcrawlerrequest.h"

namespace QtAws {
namespace Glue {

class GetCrawlerResponsePrivate;

class QTAWSGLUE_EXPORT GetCrawlerResponse : public GlueResponse {
    Q_OBJECT

public:
    GetCrawlerResponse(const GetCrawlerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCrawlerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCrawlerResponse)
    Q_DISABLE_COPY(GetCrawlerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
