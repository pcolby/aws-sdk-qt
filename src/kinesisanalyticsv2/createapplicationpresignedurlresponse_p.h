// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONPRESIGNEDURLRESPONSE_P_H
#define QTAWS_CREATEAPPLICATIONPRESIGNEDURLRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationPresignedUrlResponse;

class CreateApplicationPresignedUrlResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit CreateApplicationPresignedUrlResponsePrivate(CreateApplicationPresignedUrlResponse * const q);

    void parseCreateApplicationPresignedUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApplicationPresignedUrlResponse)
    Q_DISABLE_COPY(CreateApplicationPresignedUrlResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
