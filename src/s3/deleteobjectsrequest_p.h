// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTSREQUEST_P_H
#define QTAWS_DELETEOBJECTSREQUEST_P_H

#include "s3request_p.h"
#include "deleteobjectsrequest.h"

namespace QtAws {
namespace S3 {

class DeleteObjectsRequest;

class DeleteObjectsRequestPrivate : public S3RequestPrivate {

public:
    DeleteObjectsRequestPrivate(const S3Request::Action action,
                                   DeleteObjectsRequest * const q);
    DeleteObjectsRequestPrivate(const DeleteObjectsRequestPrivate &other,
                                   DeleteObjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteObjectsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
