// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETVERSIONINGREQUEST_H
#define QTAWS_PUTBUCKETVERSIONINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class PutBucketVersioningRequestPrivate;

class QTAWSS3CONTROL_EXPORT PutBucketVersioningRequest : public S3ControlRequest {

public:
    PutBucketVersioningRequest(const PutBucketVersioningRequest &other);
    PutBucketVersioningRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketVersioningRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
