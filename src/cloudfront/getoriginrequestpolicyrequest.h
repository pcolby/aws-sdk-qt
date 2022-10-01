// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINREQUESTPOLICYREQUEST_H
#define QTAWS_GETORIGINREQUESTPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginRequestPolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetOriginRequestPolicyRequest : public CloudFrontRequest {

public:
    GetOriginRequestPolicyRequest(const GetOriginRequestPolicyRequest &other);
    GetOriginRequestPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOriginRequestPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
