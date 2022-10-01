// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETINVENTORYCONFIGURATIONREQUEST_P_H
#define QTAWS_GETBUCKETINVENTORYCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketinventoryconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketInventoryConfigurationRequest;

class GetBucketInventoryConfigurationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketInventoryConfigurationRequestPrivate(const S3Request::Action action,
                                   GetBucketInventoryConfigurationRequest * const q);
    GetBucketInventoryConfigurationRequestPrivate(const GetBucketInventoryConfigurationRequestPrivate &other,
                                   GetBucketInventoryConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketInventoryConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
