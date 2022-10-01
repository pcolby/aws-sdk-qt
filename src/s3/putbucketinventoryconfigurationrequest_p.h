// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETINVENTORYCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBUCKETINVENTORYCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketinventoryconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketInventoryConfigurationRequest;

class PutBucketInventoryConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutBucketInventoryConfigurationRequestPrivate(const S3Request::Action action,
                                   PutBucketInventoryConfigurationRequest * const q);
    PutBucketInventoryConfigurationRequestPrivate(const PutBucketInventoryConfigurationRequestPrivate &other,
                                   PutBucketInventoryConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketInventoryConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
