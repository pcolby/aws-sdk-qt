// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMULTIPARTUPLOADREQUEST_H
#define QTAWS_COMPLETEMULTIPARTUPLOADREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class CompleteMultipartUploadRequestPrivate;

class QTAWSS3_EXPORT CompleteMultipartUploadRequest : public S3Request {

public:
    CompleteMultipartUploadRequest(const CompleteMultipartUploadRequest &other);
    CompleteMultipartUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteMultipartUploadRequest)

};

} // namespace S3
} // namespace QtAws

#endif
