// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCACHEPOLICYCONFIGREQUEST_H
#define QTAWS_GETCACHEPOLICYCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCachePolicyConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetCachePolicyConfigRequest : public CloudFrontRequest {

public:
    GetCachePolicyConfigRequest(const GetCachePolicyConfigRequest &other);
    GetCachePolicyConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCachePolicyConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
