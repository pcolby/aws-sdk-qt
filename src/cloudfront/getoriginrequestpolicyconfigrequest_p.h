// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINREQUESTPOLICYCONFIGREQUEST_P_H
#define QTAWS_GETORIGINREQUESTPOLICYCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getoriginrequestpolicyconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginRequestPolicyConfigRequest;

class GetOriginRequestPolicyConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetOriginRequestPolicyConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetOriginRequestPolicyConfigRequest * const q);
    GetOriginRequestPolicyConfigRequestPrivate(const GetOriginRequestPolicyConfigRequestPrivate &other,
                                   GetOriginRequestPolicyConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOriginRequestPolicyConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
