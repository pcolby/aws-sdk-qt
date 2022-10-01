// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTTAGGINGREQUEST_P_H
#define QTAWS_GETOBJECTTAGGINGREQUEST_P_H

#include "s3request_p.h"
#include "getobjecttaggingrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectTaggingRequest;

class GetObjectTaggingRequestPrivate : public S3RequestPrivate {

public:
    GetObjectTaggingRequestPrivate(const S3Request::Action action,
                                   GetObjectTaggingRequest * const q);
    GetObjectTaggingRequestPrivate(const GetObjectTaggingRequestPrivate &other,
                                   GetObjectTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectTaggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
