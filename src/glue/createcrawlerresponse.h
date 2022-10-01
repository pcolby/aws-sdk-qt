// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECRAWLERRESPONSE_H
#define QTAWS_CREATECRAWLERRESPONSE_H

#include "glueresponse.h"
#include "createcrawlerrequest.h"

namespace QtAws {
namespace Glue {

class CreateCrawlerResponsePrivate;

class QTAWSGLUE_EXPORT CreateCrawlerResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateCrawlerResponse(const CreateCrawlerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCrawlerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCrawlerResponse)
    Q_DISABLE_COPY(CreateCrawlerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
