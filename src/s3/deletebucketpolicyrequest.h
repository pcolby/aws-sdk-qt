// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETPOLICYREQUEST_H
#define QTAWS_DELETEBUCKETPOLICYREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteBucketPolicyRequestPrivate;

class QTAWSS3_EXPORT DeleteBucketPolicyRequest : public S3Request {

public:
    DeleteBucketPolicyRequest(const DeleteBucketPolicyRequest &other);
    DeleteBucketPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketPolicyRequest)

};

} // namespace S3
} // namespace QtAws

#endif
