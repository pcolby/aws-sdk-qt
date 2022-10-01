// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTTAGGINGREQUEST_P_H
#define QTAWS_PUTOBJECTTAGGINGREQUEST_P_H

#include "s3request_p.h"
#include "putobjecttaggingrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectTaggingRequest;

class PutObjectTaggingRequestPrivate : public S3RequestPrivate {

public:
    PutObjectTaggingRequestPrivate(const S3Request::Action action,
                                   PutObjectTaggingRequest * const q);
    PutObjectTaggingRequestPrivate(const PutObjectTaggingRequestPrivate &other,
                                   PutObjectTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectTaggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
