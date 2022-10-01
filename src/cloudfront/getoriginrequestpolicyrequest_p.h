// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINREQUESTPOLICYREQUEST_P_H
#define QTAWS_GETORIGINREQUESTPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getoriginrequestpolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginRequestPolicyRequest;

class GetOriginRequestPolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetOriginRequestPolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   GetOriginRequestPolicyRequest * const q);
    GetOriginRequestPolicyRequestPrivate(const GetOriginRequestPolicyRequestPrivate &other,
                                   GetOriginRequestPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOriginRequestPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
