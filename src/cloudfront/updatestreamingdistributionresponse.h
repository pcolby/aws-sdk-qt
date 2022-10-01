// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMINGDISTRIBUTIONRESPONSE_H
#define QTAWS_UPDATESTREAMINGDISTRIBUTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "updatestreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateStreamingDistributionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateStreamingDistributionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateStreamingDistributionResponse(const UpdateStreamingDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStreamingDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamingDistributionResponse)
    Q_DISABLE_COPY(UpdateStreamingDistributionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
