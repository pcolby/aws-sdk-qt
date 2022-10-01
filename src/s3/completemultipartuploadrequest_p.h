// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMULTIPARTUPLOADREQUEST_P_H
#define QTAWS_COMPLETEMULTIPARTUPLOADREQUEST_P_H

#include "s3request_p.h"
#include "completemultipartuploadrequest.h"

namespace QtAws {
namespace S3 {

class CompleteMultipartUploadRequest;

class CompleteMultipartUploadRequestPrivate : public S3RequestPrivate {

public:
    CompleteMultipartUploadRequestPrivate(const S3Request::Action action,
                                   CompleteMultipartUploadRequest * const q);
    CompleteMultipartUploadRequestPrivate(const CompleteMultipartUploadRequestPrivate &other,
                                   CompleteMultipartUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteMultipartUploadRequest)

};

} // namespace S3
} // namespace QtAws

#endif
