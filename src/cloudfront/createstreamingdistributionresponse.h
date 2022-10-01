// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGDISTRIBUTIONRESPONSE_H
#define QTAWS_CREATESTREAMINGDISTRIBUTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "createstreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateStreamingDistributionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateStreamingDistributionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateStreamingDistributionResponse(const CreateStreamingDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamingDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingDistributionResponse)
    Q_DISABLE_COPY(CreateStreamingDistributionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
