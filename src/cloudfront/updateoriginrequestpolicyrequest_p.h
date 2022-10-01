// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINREQUESTPOLICYREQUEST_P_H
#define QTAWS_UPDATEORIGINREQUESTPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updateoriginrequestpolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateOriginRequestPolicyRequest;

class UpdateOriginRequestPolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateOriginRequestPolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateOriginRequestPolicyRequest * const q);
    UpdateOriginRequestPolicyRequestPrivate(const UpdateOriginRequestPolicyRequestPrivate &other,
                                   UpdateOriginRequestPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOriginRequestPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
