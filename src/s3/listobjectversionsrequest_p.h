// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTVERSIONSREQUEST_P_H
#define QTAWS_LISTOBJECTVERSIONSREQUEST_P_H

#include "s3request_p.h"
#include "listobjectversionsrequest.h"

namespace QtAws {
namespace S3 {

class ListObjectVersionsRequest;

class ListObjectVersionsRequestPrivate : public S3RequestPrivate {

public:
    ListObjectVersionsRequestPrivate(const S3Request::Action action,
                                   ListObjectVersionsRequest * const q);
    ListObjectVersionsRequestPrivate(const ListObjectVersionsRequestPrivate &other,
                                   ListObjectVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectVersionsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
