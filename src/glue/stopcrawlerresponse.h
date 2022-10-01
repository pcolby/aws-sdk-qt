// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCRAWLERRESPONSE_H
#define QTAWS_STOPCRAWLERRESPONSE_H

#include "glueresponse.h"
#include "stopcrawlerrequest.h"

namespace QtAws {
namespace Glue {

class StopCrawlerResponsePrivate;

class QTAWSGLUE_EXPORT StopCrawlerResponse : public GlueResponse {
    Q_OBJECT

public:
    StopCrawlerResponse(const StopCrawlerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopCrawlerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCrawlerResponse)
    Q_DISABLE_COPY(StopCrawlerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
