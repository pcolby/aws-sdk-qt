// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGDISTRIBUTIONRESPONSE_H
#define QTAWS_GETSTREAMINGDISTRIBUTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "getstreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetStreamingDistributionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetStreamingDistributionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetStreamingDistributionResponse(const GetStreamingDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStreamingDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingDistributionResponse)
    Q_DISABLE_COPY(GetStreamingDistributionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
