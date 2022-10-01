// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYREQUEST_H
#define QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCloudFrontOriginAccessIdentityRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetCloudFrontOriginAccessIdentityRequest : public CloudFrontRequest {

public:
    GetCloudFrontOriginAccessIdentityRequest(const GetCloudFrontOriginAccessIdentityRequest &other);
    GetCloudFrontOriginAccessIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCloudFrontOriginAccessIdentityRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
