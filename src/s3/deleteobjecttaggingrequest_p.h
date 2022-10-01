// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTTAGGINGREQUEST_P_H
#define QTAWS_DELETEOBJECTTAGGINGREQUEST_P_H

#include "s3request_p.h"
#include "deleteobjecttaggingrequest.h"

namespace QtAws {
namespace S3 {

class DeleteObjectTaggingRequest;

class DeleteObjectTaggingRequestPrivate : public S3RequestPrivate {

public:
    DeleteObjectTaggingRequestPrivate(const S3Request::Action action,
                                   DeleteObjectTaggingRequest * const q);
    DeleteObjectTaggingRequestPrivate(const DeleteObjectTaggingRequestPrivate &other,
                                   DeleteObjectTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteObjectTaggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
