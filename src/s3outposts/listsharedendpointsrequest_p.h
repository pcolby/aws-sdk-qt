// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDENDPOINTSREQUEST_P_H
#define QTAWS_LISTSHAREDENDPOINTSREQUEST_P_H

#include "s3outpostsrequest_p.h"
#include "listsharedendpointsrequest.h"

namespace QtAws {
namespace S3Outposts {

class ListSharedEndpointsRequest;

class ListSharedEndpointsRequestPrivate : public S3OutpostsRequestPrivate {

public:
    ListSharedEndpointsRequestPrivate(const S3OutpostsRequest::Action action,
                                   ListSharedEndpointsRequest * const q);
    ListSharedEndpointsRequestPrivate(const ListSharedEndpointsRequestPrivate &other,
                                   ListSharedEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSharedEndpointsRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
