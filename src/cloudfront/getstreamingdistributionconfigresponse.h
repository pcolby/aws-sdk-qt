// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGDISTRIBUTIONCONFIGRESPONSE_H
#define QTAWS_GETSTREAMINGDISTRIBUTIONCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getstreamingdistributionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetStreamingDistributionConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetStreamingDistributionConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetStreamingDistributionConfigResponse(const GetStreamingDistributionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStreamingDistributionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingDistributionConfigResponse)
    Q_DISABLE_COPY(GetStreamingDistributionConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
