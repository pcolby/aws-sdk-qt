// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACLREQUEST_H
#define QTAWS_GETBUCKETACLREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketAclRequestPrivate;

class QTAWSS3_EXPORT GetBucketAclRequest : public S3Request {

public:
    GetBucketAclRequest(const GetBucketAclRequest &other);
    GetBucketAclRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketAclRequest)

};

} // namespace S3
} // namespace QtAws

#endif
