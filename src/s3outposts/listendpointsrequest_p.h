// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSREQUEST_P_H
#define QTAWS_LISTENDPOINTSREQUEST_P_H

#include "s3outpostsrequest_p.h"
#include "listendpointsrequest.h"

namespace QtAws {
namespace S3Outposts {

class ListEndpointsRequest;

class ListEndpointsRequestPrivate : public S3OutpostsRequestPrivate {

public:
    ListEndpointsRequestPrivate(const S3OutpostsRequest::Action action,
                                   ListEndpointsRequest * const q);
    ListEndpointsRequestPrivate(const ListEndpointsRequestPrivate &other,
                                   ListEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointsRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
