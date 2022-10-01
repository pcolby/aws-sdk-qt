// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINREQUESTPOLICYREQUEST_H
#define QTAWS_CREATEORIGINREQUESTPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateOriginRequestPolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateOriginRequestPolicyRequest : public CloudFrontRequest {

public:
    CreateOriginRequestPolicyRequest(const CreateOriginRequestPolicyRequest &other);
    CreateOriginRequestPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOriginRequestPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
