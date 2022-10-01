// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADPARTCOPYREQUEST_P_H
#define QTAWS_UPLOADPARTCOPYREQUEST_P_H

#include "s3request_p.h"
#include "uploadpartcopyrequest.h"

namespace QtAws {
namespace S3 {

class UploadPartCopyRequest;

class UploadPartCopyRequestPrivate : public S3RequestPrivate {

public:
    UploadPartCopyRequestPrivate(const S3Request::Action action,
                                   UploadPartCopyRequest * const q);
    UploadPartCopyRequestPrivate(const UploadPartCopyRequestPrivate &other,
                                   UploadPartCopyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadPartCopyRequest)

};

} // namespace S3
} // namespace QtAws

#endif
