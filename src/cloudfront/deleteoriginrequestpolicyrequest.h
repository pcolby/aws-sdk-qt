// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINREQUESTPOLICYREQUEST_H
#define QTAWS_DELETEORIGINREQUESTPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteOriginRequestPolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteOriginRequestPolicyRequest : public CloudFrontRequest {

public:
    DeleteOriginRequestPolicyRequest(const DeleteOriginRequestPolicyRequest &other);
    DeleteOriginRequestPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOriginRequestPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
