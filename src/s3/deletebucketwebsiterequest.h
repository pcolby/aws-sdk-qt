// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETWEBSITEREQUEST_H
#define QTAWS_DELETEBUCKETWEBSITEREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteBucketWebsiteRequestPrivate;

class QTAWSS3_EXPORT DeleteBucketWebsiteRequest : public S3Request {

public:
    DeleteBucketWebsiteRequest(const DeleteBucketWebsiteRequest &other);
    DeleteBucketWebsiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketWebsiteRequest)

};

} // namespace S3
} // namespace QtAws

#endif
