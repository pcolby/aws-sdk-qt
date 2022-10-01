// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINREQUESTPOLICYREQUEST_H
#define QTAWS_UPDATEORIGINREQUESTPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateOriginRequestPolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateOriginRequestPolicyRequest : public CloudFrontRequest {

public:
    UpdateOriginRequestPolicyRequest(const UpdateOriginRequestPolicyRequest &other);
    UpdateOriginRequestPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOriginRequestPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
