// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETVERSIONINGREQUEST_H
#define QTAWS_GETBUCKETVERSIONINGREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketVersioningRequestPrivate;

class QTAWSS3_EXPORT GetBucketVersioningRequest : public S3Request {

public:
    GetBucketVersioningRequest(const GetBucketVersioningRequest &other);
    GetBucketVersioningRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketVersioningRequest)

};

} // namespace S3
} // namespace QtAws

#endif
