// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketNotificationConfigurationRequestPrivate;

class QTAWSS3_EXPORT GetBucketNotificationConfigurationRequest : public S3Request {

public:
    GetBucketNotificationConfigurationRequest(const GetBucketNotificationConfigurationRequest &other);
    GetBucketNotificationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketNotificationConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
