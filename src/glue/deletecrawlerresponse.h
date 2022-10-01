// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECRAWLERRESPONSE_H
#define QTAWS_DELETECRAWLERRESPONSE_H

#include "glueresponse.h"
#include "deletecrawlerrequest.h"

namespace QtAws {
namespace Glue {

class DeleteCrawlerResponsePrivate;

class QTAWSGLUE_EXPORT DeleteCrawlerResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteCrawlerResponse(const DeleteCrawlerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCrawlerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCrawlerResponse)
    Q_DISABLE_COPY(DeleteCrawlerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
