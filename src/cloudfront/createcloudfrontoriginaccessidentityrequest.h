// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFRONTORIGINACCESSIDENTITYREQUEST_H
#define QTAWS_CREATECLOUDFRONTORIGINACCESSIDENTITYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateCloudFrontOriginAccessIdentityRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateCloudFrontOriginAccessIdentityRequest : public CloudFrontRequest {

public:
    CreateCloudFrontOriginAccessIdentityRequest(const CreateCloudFrontOriginAccessIdentityRequest &other);
    CreateCloudFrontOriginAccessIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCloudFrontOriginAccessIdentityRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
