// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACCELERATECONFIGURATIONREQUEST_H
#define QTAWS_GETBUCKETACCELERATECONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketAccelerateConfigurationRequestPrivate;

class QTAWSS3_EXPORT GetBucketAccelerateConfigurationRequest : public S3Request {

public:
    GetBucketAccelerateConfigurationRequest(const GetBucketAccelerateConfigurationRequest &other);
    GetBucketAccelerateConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketAccelerateConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
