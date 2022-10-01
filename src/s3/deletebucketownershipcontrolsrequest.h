// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETOWNERSHIPCONTROLSREQUEST_H
#define QTAWS_DELETEBUCKETOWNERSHIPCONTROLSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteBucketOwnershipControlsRequestPrivate;

class QTAWSS3_EXPORT DeleteBucketOwnershipControlsRequest : public S3Request {

public:
    DeleteBucketOwnershipControlsRequest(const DeleteBucketOwnershipControlsRequest &other);
    DeleteBucketOwnershipControlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketOwnershipControlsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
