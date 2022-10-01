// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETINVENTORYCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEBUCKETINVENTORYCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketinventoryconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketInventoryConfigurationRequest;

class DeleteBucketInventoryConfigurationRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketInventoryConfigurationRequestPrivate(const S3Request::Action action,
                                   DeleteBucketInventoryConfigurationRequest * const q);
    DeleteBucketInventoryConfigurationRequestPrivate(const DeleteBucketInventoryConfigurationRequestPrivate &other,
                                   DeleteBucketInventoryConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketInventoryConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
