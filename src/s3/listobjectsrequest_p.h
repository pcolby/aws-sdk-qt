// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSREQUEST_P_H
#define QTAWS_LISTOBJECTSREQUEST_P_H

#include "s3request_p.h"
#include "listobjectsrequest.h"

namespace QtAws {
namespace S3 {

class ListObjectsRequest;

class ListObjectsRequestPrivate : public S3RequestPrivate {

public:
    ListObjectsRequestPrivate(const S3Request::Action action,
                                   ListObjectsRequest * const q);
    ListObjectsRequestPrivate(const ListObjectsRequestPrivate &other,
                                   ListObjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
