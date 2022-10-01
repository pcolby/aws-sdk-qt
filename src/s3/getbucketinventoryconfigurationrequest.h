// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETINVENTORYCONFIGURATIONREQUEST_H
#define QTAWS_GETBUCKETINVENTORYCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketInventoryConfigurationRequestPrivate;

class QTAWSS3_EXPORT GetBucketInventoryConfigurationRequest : public S3Request {

public:
    GetBucketInventoryConfigurationRequest(const GetBucketInventoryConfigurationRequest &other);
    GetBucketInventoryConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketInventoryConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
