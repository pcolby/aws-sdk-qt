// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETACCELERATECONFIGURATIONREQUEST_H
#define QTAWS_PUTBUCKETACCELERATECONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketAccelerateConfigurationRequestPrivate;

class QTAWSS3_EXPORT PutBucketAccelerateConfigurationRequest : public S3Request {

public:
    PutBucketAccelerateConfigurationRequest(const PutBucketAccelerateConfigurationRequest &other);
    PutBucketAccelerateConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketAccelerateConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
