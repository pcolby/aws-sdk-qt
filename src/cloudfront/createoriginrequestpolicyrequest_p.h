// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINREQUESTPOLICYREQUEST_P_H
#define QTAWS_CREATEORIGINREQUESTPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createoriginrequestpolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateOriginRequestPolicyRequest;

class CreateOriginRequestPolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateOriginRequestPolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateOriginRequestPolicyRequest * const q);
    CreateOriginRequestPolicyRequestPrivate(const CreateOriginRequestPolicyRequestPrivate &other,
                                   CreateOriginRequestPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOriginRequestPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
