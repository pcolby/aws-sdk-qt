// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONPRESIGNEDURLRESPONSE_H
#define QTAWS_CREATEAPPLICATIONPRESIGNEDURLRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "createapplicationpresignedurlrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationPresignedUrlResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT CreateApplicationPresignedUrlResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    CreateApplicationPresignedUrlResponse(const CreateApplicationPresignedUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApplicationPresignedUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationPresignedUrlResponse)
    Q_DISABLE_COPY(CreateApplicationPresignedUrlResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
