// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCRAWLERRESPONSE_H
#define QTAWS_STARTCRAWLERRESPONSE_H

#include "glueresponse.h"
#include "startcrawlerrequest.h"

namespace QtAws {
namespace Glue {

class StartCrawlerResponsePrivate;

class QTAWSGLUE_EXPORT StartCrawlerResponse : public GlueResponse {
    Q_OBJECT

public:
    StartCrawlerResponse(const StartCrawlerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCrawlerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCrawlerResponse)
    Q_DISABLE_COPY(StartCrawlerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
