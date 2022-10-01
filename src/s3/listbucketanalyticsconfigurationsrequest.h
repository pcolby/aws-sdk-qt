// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSREQUEST_H
#define QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListBucketAnalyticsConfigurationsRequestPrivate;

class QTAWSS3_EXPORT ListBucketAnalyticsConfigurationsRequest : public S3Request {

public:
    ListBucketAnalyticsConfigurationsRequest(const ListBucketAnalyticsConfigurationsRequest &other);
    ListBucketAnalyticsConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketAnalyticsConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
