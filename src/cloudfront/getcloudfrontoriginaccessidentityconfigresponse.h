// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYCONFIGRESPONSE_H
#define QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getcloudfrontoriginaccessidentityconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCloudFrontOriginAccessIdentityConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetCloudFrontOriginAccessIdentityConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetCloudFrontOriginAccessIdentityConfigResponse(const GetCloudFrontOriginAccessIdentityConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCloudFrontOriginAccessIdentityConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCloudFrontOriginAccessIdentityConfigResponse)
    Q_DISABLE_COPY(GetCloudFrontOriginAccessIdentityConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
