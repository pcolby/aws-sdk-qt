// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICACCESSBLOCKREQUEST_P_H
#define QTAWS_GETPUBLICACCESSBLOCKREQUEST_P_H

#include "s3request_p.h"
#include "getpublicaccessblockrequest.h"

namespace QtAws {
namespace S3 {

class GetPublicAccessBlockRequest;

class GetPublicAccessBlockRequestPrivate : public S3RequestPrivate {

public:
    GetPublicAccessBlockRequestPrivate(const S3Request::Action action,
                                   GetPublicAccessBlockRequest * const q);
    GetPublicAccessBlockRequestPrivate(const GetPublicAccessBlockRequestPrivate &other,
                                   GetPublicAccessBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPublicAccessBlockRequest)

};

} // namespace S3
} // namespace QtAws

#endif
