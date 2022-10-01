// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETINVENTORYCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTBUCKETINVENTORYCONFIGURATIONSREQUEST_P_H

#include "s3request_p.h"
#include "listbucketinventoryconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketInventoryConfigurationsRequest;

class ListBucketInventoryConfigurationsRequestPrivate : public S3RequestPrivate {

public:
    ListBucketInventoryConfigurationsRequestPrivate(const S3Request::Action action,
                                   ListBucketInventoryConfigurationsRequest * const q);
    ListBucketInventoryConfigurationsRequestPrivate(const ListBucketInventoryConfigurationsRequestPrivate &other,
                                   ListBucketInventoryConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBucketInventoryConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
