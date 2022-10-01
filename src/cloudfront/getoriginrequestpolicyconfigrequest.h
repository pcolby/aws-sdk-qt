// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINREQUESTPOLICYCONFIGREQUEST_H
#define QTAWS_GETORIGINREQUESTPOLICYCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginRequestPolicyConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetOriginRequestPolicyConfigRequest : public CloudFrontRequest {

public:
    GetOriginRequestPolicyConfigRequest(const GetOriginRequestPolicyConfigRequest &other);
    GetOriginRequestPolicyConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOriginRequestPolicyConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
