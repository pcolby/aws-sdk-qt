// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINREQUESTPOLICYREQUEST_P_H
#define QTAWS_DELETEORIGINREQUESTPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deleteoriginrequestpolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteOriginRequestPolicyRequest;

class DeleteOriginRequestPolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteOriginRequestPolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteOriginRequestPolicyRequest * const q);
    DeleteOriginRequestPolicyRequestPrivate(const DeleteOriginRequestPolicyRequestPrivate &other,
                                   DeleteOriginRequestPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOriginRequestPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
