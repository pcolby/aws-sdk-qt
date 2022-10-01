// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETWEBSITEREQUEST_H
#define QTAWS_PUTBUCKETWEBSITEREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketWebsiteRequestPrivate;

class QTAWSS3_EXPORT PutBucketWebsiteRequest : public S3Request {

public:
    PutBucketWebsiteRequest(const PutBucketWebsiteRequest &other);
    PutBucketWebsiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketWebsiteRequest)

};

} // namespace S3
} // namespace QtAws

#endif
