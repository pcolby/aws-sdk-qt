// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETWEBSITEREQUEST_H
#define QTAWS_GETBUCKETWEBSITEREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketWebsiteRequestPrivate;

class QTAWSS3_EXPORT GetBucketWebsiteRequest : public S3Request {

public:
    GetBucketWebsiteRequest(const GetBucketWebsiteRequest &other);
    GetBucketWebsiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketWebsiteRequest)

};

} // namespace S3
} // namespace QtAws

#endif
