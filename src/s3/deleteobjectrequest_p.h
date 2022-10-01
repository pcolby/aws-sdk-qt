// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTREQUEST_P_H
#define QTAWS_DELETEOBJECTREQUEST_P_H

#include "s3request_p.h"
#include "deleteobjectrequest.h"

namespace QtAws {
namespace S3 {

class DeleteObjectRequest;

class DeleteObjectRequestPrivate : public S3RequestPrivate {

public:
    DeleteObjectRequestPrivate(const S3Request::Action action,
                                   DeleteObjectRequest * const q);
    DeleteObjectRequestPrivate(const DeleteObjectRequestPrivate &other,
                                   DeleteObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteObjectRequest)

};

} // namespace S3
} // namespace QtAws

#endif
