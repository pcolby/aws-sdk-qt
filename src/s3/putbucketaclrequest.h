// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETACLREQUEST_H
#define QTAWS_PUTBUCKETACLREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketAclRequestPrivate;

class QTAWSS3_EXPORT PutBucketAclRequest : public S3Request {

public:
    PutBucketAclRequest(const PutBucketAclRequest &other);
    PutBucketAclRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketAclRequest)

};

} // namespace S3
} // namespace QtAws

#endif
