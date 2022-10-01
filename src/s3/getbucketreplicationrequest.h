// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREPLICATIONREQUEST_H
#define QTAWS_GETBUCKETREPLICATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketReplicationRequestPrivate;

class QTAWSS3_EXPORT GetBucketReplicationRequest : public S3Request {

public:
    GetBucketReplicationRequest(const GetBucketReplicationRequest &other);
    GetBucketReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketReplicationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
