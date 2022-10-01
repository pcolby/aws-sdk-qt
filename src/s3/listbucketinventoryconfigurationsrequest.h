// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETINVENTORYCONFIGURATIONSREQUEST_H
#define QTAWS_LISTBUCKETINVENTORYCONFIGURATIONSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListBucketInventoryConfigurationsRequestPrivate;

class QTAWSS3_EXPORT ListBucketInventoryConfigurationsRequest : public S3Request {

public:
    ListBucketInventoryConfigurationsRequest(const ListBucketInventoryConfigurationsRequest &other);
    ListBucketInventoryConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketInventoryConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
