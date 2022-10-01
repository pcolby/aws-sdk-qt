// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCACHEPOLICIESREQUEST_P_H
#define QTAWS_LISTCACHEPOLICIESREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listcachepoliciesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListCachePoliciesRequest;

class ListCachePoliciesRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListCachePoliciesRequestPrivate(const CloudFrontRequest::Action action,
                                   ListCachePoliciesRequest * const q);
    ListCachePoliciesRequestPrivate(const ListCachePoliciesRequestPrivate &other,
                                   ListCachePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCachePoliciesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
