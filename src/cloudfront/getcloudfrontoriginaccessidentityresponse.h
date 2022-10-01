// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYRESPONSE_H
#define QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYRESPONSE_H

#include "cloudfrontresponse.h"
#include "getcloudfrontoriginaccessidentityrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCloudFrontOriginAccessIdentityResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetCloudFrontOriginAccessIdentityResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetCloudFrontOriginAccessIdentityResponse(const GetCloudFrontOriginAccessIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCloudFrontOriginAccessIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCloudFrontOriginAccessIdentityResponse)
    Q_DISABLE_COPY(GetCloudFrontOriginAccessIdentityResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
