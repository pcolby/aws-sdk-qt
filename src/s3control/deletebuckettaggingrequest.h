// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETTAGGINGREQUEST_H
#define QTAWS_DELETEBUCKETTAGGINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketTaggingRequestPrivate;

class QTAWSS3CONTROL_EXPORT DeleteBucketTaggingRequest : public S3ControlRequest {

public:
    DeleteBucketTaggingRequest(const DeleteBucketTaggingRequest &other);
    DeleteBucketTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
