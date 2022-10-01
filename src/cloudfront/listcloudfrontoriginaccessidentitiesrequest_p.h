// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLOUDFRONTORIGINACCESSIDENTITIESREQUEST_P_H
#define QTAWS_LISTCLOUDFRONTORIGINACCESSIDENTITIESREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listcloudfrontoriginaccessidentitiesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListCloudFrontOriginAccessIdentitiesRequest;

class ListCloudFrontOriginAccessIdentitiesRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListCloudFrontOriginAccessIdentitiesRequestPrivate(const CloudFrontRequest::Action action,
                                   ListCloudFrontOriginAccessIdentitiesRequest * const q);
    ListCloudFrontOriginAccessIdentitiesRequestPrivate(const ListCloudFrontOriginAccessIdentitiesRequestPrivate &other,
                                   ListCloudFrontOriginAccessIdentitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCloudFrontOriginAccessIdentitiesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
