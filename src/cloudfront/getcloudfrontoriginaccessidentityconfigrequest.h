// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYCONFIGREQUEST_H
#define QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCloudFrontOriginAccessIdentityConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetCloudFrontOriginAccessIdentityConfigRequest : public CloudFrontRequest {

public:
    GetCloudFrontOriginAccessIdentityConfigRequest(const GetCloudFrontOriginAccessIdentityConfigRequest &other);
    GetCloudFrontOriginAccessIdentityConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCloudFrontOriginAccessIdentityConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
