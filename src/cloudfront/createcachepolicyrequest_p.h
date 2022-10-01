// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEPOLICYREQUEST_P_H
#define QTAWS_CREATECACHEPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createcachepolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateCachePolicyRequest;

class CreateCachePolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateCachePolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateCachePolicyRequest * const q);
    CreateCachePolicyRequestPrivate(const CreateCachePolicyRequestPrivate &other,
                                   CreateCachePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCachePolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
