// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPARTUPLOADREQUEST_P_H
#define QTAWS_CREATEMULTIPARTUPLOADREQUEST_P_H

#include "s3request_p.h"
#include "createmultipartuploadrequest.h"

namespace QtAws {
namespace S3 {

class CreateMultipartUploadRequest;

class CreateMultipartUploadRequestPrivate : public S3RequestPrivate {

public:
    CreateMultipartUploadRequestPrivate(const S3Request::Action action,
                                   CreateMultipartUploadRequest * const q);
    CreateMultipartUploadRequestPrivate(const CreateMultipartUploadRequestPrivate &other,
                                   CreateMultipartUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMultipartUploadRequest)

};

} // namespace S3
} // namespace QtAws

#endif
