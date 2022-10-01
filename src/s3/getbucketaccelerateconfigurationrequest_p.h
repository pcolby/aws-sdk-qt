// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACCELERATECONFIGURATIONREQUEST_P_H
#define QTAWS_GETBUCKETACCELERATECONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketaccelerateconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketAccelerateConfigurationRequest;

class GetBucketAccelerateConfigurationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketAccelerateConfigurationRequestPrivate(const S3Request::Action action,
                                   GetBucketAccelerateConfigurationRequest * const q);
    GetBucketAccelerateConfigurationRequestPrivate(const GetBucketAccelerateConfigurationRequestPrivate &other,
                                   GetBucketAccelerateConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketAccelerateConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
