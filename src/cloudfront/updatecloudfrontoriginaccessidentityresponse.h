// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_H
#define QTAWS_UPDATECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_H

#include "cloudfrontresponse.h"
#include "updatecloudfrontoriginaccessidentityrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateCloudFrontOriginAccessIdentityResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateCloudFrontOriginAccessIdentityResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateCloudFrontOriginAccessIdentityResponse(const UpdateCloudFrontOriginAccessIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCloudFrontOriginAccessIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCloudFrontOriginAccessIdentityResponse)
    Q_DISABLE_COPY(UpdateCloudFrontOriginAccessIdentityResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
