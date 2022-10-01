// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAFFICPOLICYCOMMENTREQUEST_H
#define QTAWS_UPDATETRAFFICPOLICYCOMMENTREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class UpdateTrafficPolicyCommentRequestPrivate;

class QTAWSROUTE53_EXPORT UpdateTrafficPolicyCommentRequest : public Route53Request {

public:
    UpdateTrafficPolicyCommentRequest(const UpdateTrafficPolicyCommentRequest &other);
    UpdateTrafficPolicyCommentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrafficPolicyCommentRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
