// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECACHEPOLICYREQUEST_P_H
#define QTAWS_UPDATECACHEPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatecachepolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateCachePolicyRequest;

class UpdateCachePolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateCachePolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateCachePolicyRequest * const q);
    UpdateCachePolicyRequestPrivate(const UpdateCachePolicyRequestPrivate &other,
                                   UpdateCachePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCachePolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
