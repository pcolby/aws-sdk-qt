// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETREPLICATIONREQUEST_H
#define QTAWS_DELETEBUCKETREPLICATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteBucketReplicationRequestPrivate;

class QTAWSS3_EXPORT DeleteBucketReplicationRequest : public S3Request {

public:
    DeleteBucketReplicationRequest(const DeleteBucketReplicationRequest &other);
    DeleteBucketReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketReplicationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
