// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCRAWLERSCHEDULERESPONSE_H
#define QTAWS_STOPCRAWLERSCHEDULERESPONSE_H

#include "glueresponse.h"
#include "stopcrawlerschedulerequest.h"

namespace QtAws {
namespace Glue {

class StopCrawlerScheduleResponsePrivate;

class QTAWSGLUE_EXPORT StopCrawlerScheduleResponse : public GlueResponse {
    Q_OBJECT

public:
    StopCrawlerScheduleResponse(const StopCrawlerScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopCrawlerScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCrawlerScheduleResponse)
    Q_DISABLE_COPY(StopCrawlerScheduleResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
