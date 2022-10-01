// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETMETRICSCONFIGURATIONREQUEST_H
#define QTAWS_DELETEBUCKETMETRICSCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteBucketMetricsConfigurationRequestPrivate;

class QTAWSS3_EXPORT DeleteBucketMetricsConfigurationRequest : public S3Request {

public:
    DeleteBucketMetricsConfigurationRequest(const DeleteBucketMetricsConfigurationRequest &other);
    DeleteBucketMetricsConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketMetricsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
