// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHEPOLICYREQUEST_P_H
#define QTAWS_DELETECACHEPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletecachepolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteCachePolicyRequest;

class DeleteCachePolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteCachePolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteCachePolicyRequest * const q);
    DeleteCachePolicyRequestPrivate(const DeleteCachePolicyRequestPrivate &other,
                                   DeleteCachePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCachePolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
