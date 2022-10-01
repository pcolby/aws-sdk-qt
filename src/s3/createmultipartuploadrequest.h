// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPARTUPLOADREQUEST_H
#define QTAWS_CREATEMULTIPARTUPLOADREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class CreateMultipartUploadRequestPrivate;

class QTAWSS3_EXPORT CreateMultipartUploadRequest : public S3Request {

public:
    CreateMultipartUploadRequest(const CreateMultipartUploadRequest &other);
    CreateMultipartUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMultipartUploadRequest)

};

} // namespace S3
} // namespace QtAws

#endif
