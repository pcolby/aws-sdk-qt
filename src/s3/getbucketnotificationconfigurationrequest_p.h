// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketnotificationconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketNotificationConfigurationRequest;

class GetBucketNotificationConfigurationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketNotificationConfigurationRequestPrivate(const S3Request::Action action,
                                   GetBucketNotificationConfigurationRequest * const q);
    GetBucketNotificationConfigurationRequestPrivate(const GetBucketNotificationConfigurationRequestPrivate &other,
                                   GetBucketNotificationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketNotificationConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
