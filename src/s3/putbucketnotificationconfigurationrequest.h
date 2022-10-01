// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETNOTIFICATIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTBUCKETNOTIFICATIONCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketNotificationConfigurationRequestPrivate;

class QTAWSS3_EXPORT PutBucketNotificationConfigurationRequest : public S3Request {

public:
    PutBucketNotificationConfigurationRequest(const PutBucketNotificationConfigurationRequest &other);
    PutBucketNotificationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketNotificationConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
