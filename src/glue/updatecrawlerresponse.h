// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRAWLERRESPONSE_H
#define QTAWS_UPDATECRAWLERRESPONSE_H

#include "glueresponse.h"
#include "updatecrawlerrequest.h"

namespace QtAws {
namespace Glue {

class UpdateCrawlerResponsePrivate;

class QTAWSGLUE_EXPORT UpdateCrawlerResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateCrawlerResponse(const UpdateCrawlerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCrawlerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCrawlerResponse)
    Q_DISABLE_COPY(UpdateCrawlerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
