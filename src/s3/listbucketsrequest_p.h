// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETSREQUEST_P_H
#define QTAWS_LISTBUCKETSREQUEST_P_H

#include "s3request_p.h"
#include "listbucketsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketsRequest;

class ListBucketsRequestPrivate : public S3RequestPrivate {

public:
    ListBucketsRequestPrivate(const S3Request::Action action,
                                   ListBucketsRequest * const q);
    ListBucketsRequestPrivate(const ListBucketsRequestPrivate &other,
                                   ListBucketsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBucketsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
