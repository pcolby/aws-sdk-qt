// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLOGGINGREQUEST_H
#define QTAWS_GETBUCKETLOGGINGREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketLoggingRequestPrivate;

class QTAWSS3_EXPORT GetBucketLoggingRequest : public S3Request {

public:
    GetBucketLoggingRequest(const GetBucketLoggingRequest &other);
    GetBucketLoggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketLoggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
