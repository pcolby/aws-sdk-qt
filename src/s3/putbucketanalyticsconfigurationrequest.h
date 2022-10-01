// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETANALYTICSCONFIGURATIONREQUEST_H
#define QTAWS_PUTBUCKETANALYTICSCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketAnalyticsConfigurationRequestPrivate;

class QTAWSS3_EXPORT PutBucketAnalyticsConfigurationRequest : public S3Request {

public:
    PutBucketAnalyticsConfigurationRequest(const PutBucketAnalyticsConfigurationRequest &other);
    PutBucketAnalyticsConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketAnalyticsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
