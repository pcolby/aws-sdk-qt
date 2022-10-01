// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTMULTIPARTUPLOADREQUEST_P_H
#define QTAWS_ABORTMULTIPARTUPLOADREQUEST_P_H

#include "s3request_p.h"
#include "abortmultipartuploadrequest.h"

namespace QtAws {
namespace S3 {

class AbortMultipartUploadRequest;

class AbortMultipartUploadRequestPrivate : public S3RequestPrivate {

public:
    AbortMultipartUploadRequestPrivate(const S3Request::Action action,
                                   AbortMultipartUploadRequest * const q);
    AbortMultipartUploadRequestPrivate(const AbortMultipartUploadRequestPrivate &other,
                                   AbortMultipartUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(AbortMultipartUploadRequest)

};

} // namespace S3
} // namespace QtAws

#endif
