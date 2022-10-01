// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAFFICPOLICYCOMMENTREQUEST_P_H
#define QTAWS_UPDATETRAFFICPOLICYCOMMENTREQUEST_P_H

#include "route53request_p.h"
#include "updatetrafficpolicycommentrequest.h"

namespace QtAws {
namespace Route53 {

class UpdateTrafficPolicyCommentRequest;

class UpdateTrafficPolicyCommentRequestPrivate : public Route53RequestPrivate {

public:
    UpdateTrafficPolicyCommentRequestPrivate(const Route53Request::Action action,
                                   UpdateTrafficPolicyCommentRequest * const q);
    UpdateTrafficPolicyCommentRequestPrivate(const UpdateTrafficPolicyCommentRequestPrivate &other,
                                   UpdateTrafficPolicyCommentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrafficPolicyCommentRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
