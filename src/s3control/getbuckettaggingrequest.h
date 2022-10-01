// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETTAGGINGREQUEST_H
#define QTAWS_GETBUCKETTAGGINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketTaggingRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetBucketTaggingRequest : public S3ControlRequest {

public:
    GetBucketTaggingRequest(const GetBucketTaggingRequest &other);
    GetBucketTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
