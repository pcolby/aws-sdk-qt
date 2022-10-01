// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADPARTREQUEST_P_H
#define QTAWS_UPLOADPARTREQUEST_P_H

#include "s3request_p.h"
#include "uploadpartrequest.h"

namespace QtAws {
namespace S3 {

class UploadPartRequest;

class UploadPartRequestPrivate : public S3RequestPrivate {

public:
    UploadPartRequestPrivate(const S3Request::Action action,
                                   UploadPartRequest * const q);
    UploadPartRequestPrivate(const UploadPartRequestPrivate &other,
                                   UploadPartRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadPartRequest)

};

} // namespace S3
} // namespace QtAws

#endif
