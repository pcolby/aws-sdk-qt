// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETNOTIFICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBUCKETNOTIFICATIONCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketnotificationconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketNotificationConfigurationRequest;

class PutBucketNotificationConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutBucketNotificationConfigurationRequestPrivate(const S3Request::Action action,
                                   PutBucketNotificationConfigurationRequest * const q);
    PutBucketNotificationConfigurationRequestPrivate(const PutBucketNotificationConfigurationRequestPrivate &other,
                                   PutBucketNotificationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketNotificationConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
