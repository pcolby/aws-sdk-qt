// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRAWLERSCHEDULERESPONSE_H
#define QTAWS_UPDATECRAWLERSCHEDULERESPONSE_H

#include "glueresponse.h"
#include "updatecrawlerschedulerequest.h"

namespace QtAws {
namespace Glue {

class UpdateCrawlerScheduleResponsePrivate;

class QTAWSGLUE_EXPORT UpdateCrawlerScheduleResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateCrawlerScheduleResponse(const UpdateCrawlerScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCrawlerScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCrawlerScheduleResponse)
    Q_DISABLE_COPY(UpdateCrawlerScheduleResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
