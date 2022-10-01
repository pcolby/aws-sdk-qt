// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCRAWLERSCHEDULERESPONSE_H
#define QTAWS_STARTCRAWLERSCHEDULERESPONSE_H

#include "glueresponse.h"
#include "startcrawlerschedulerequest.h"

namespace QtAws {
namespace Glue {

class StartCrawlerScheduleResponsePrivate;

class QTAWSGLUE_EXPORT StartCrawlerScheduleResponse : public GlueResponse {
    Q_OBJECT

public:
    StartCrawlerScheduleResponse(const StartCrawlerScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCrawlerScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCrawlerScheduleResponse)
    Q_DISABLE_COPY(StartCrawlerScheduleResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
