// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETTAGGINGREQUEST_H
#define QTAWS_PUTBUCKETTAGGINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class PutBucketTaggingRequestPrivate;

class QTAWSS3CONTROL_EXPORT PutBucketTaggingRequest : public S3ControlRequest {

public:
    PutBucketTaggingRequest(const PutBucketTaggingRequest &other);
    PutBucketTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
