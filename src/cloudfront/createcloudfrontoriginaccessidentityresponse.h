// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_H
#define QTAWS_CREATECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_H

#include "cloudfrontresponse.h"
#include "createcloudfrontoriginaccessidentityrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateCloudFrontOriginAccessIdentityResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateCloudFrontOriginAccessIdentityResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateCloudFrontOriginAccessIdentityResponse(const CreateCloudFrontOriginAccessIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCloudFrontOriginAccessIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCloudFrontOriginAccessIdentityResponse)
    Q_DISABLE_COPY(CreateCloudFrontOriginAccessIdentityResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
