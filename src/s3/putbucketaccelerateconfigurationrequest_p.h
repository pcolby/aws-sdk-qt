// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETACCELERATECONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBUCKETACCELERATECONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketaccelerateconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketAccelerateConfigurationRequest;

class PutBucketAccelerateConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutBucketAccelerateConfigurationRequestPrivate(const S3Request::Action action,
                                   PutBucketAccelerateConfigurationRequest * const q);
    PutBucketAccelerateConfigurationRequestPrivate(const PutBucketAccelerateConfigurationRequestPrivate &other,
                                   PutBucketAccelerateConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketAccelerateConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
