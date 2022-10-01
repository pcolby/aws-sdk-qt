// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETMETRICSCONFIGURATIONREQUEST_H
#define QTAWS_PUTBUCKETMETRICSCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketMetricsConfigurationRequestPrivate;

class QTAWSS3_EXPORT PutBucketMetricsConfigurationRequest : public S3Request {

public:
    PutBucketMetricsConfigurationRequest(const PutBucketMetricsConfigurationRequest &other);
    PutBucketMetricsConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketMetricsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
