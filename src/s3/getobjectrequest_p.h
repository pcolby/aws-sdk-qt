// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTREQUEST_P_H
#define QTAWS_GETOBJECTREQUEST_P_H

#include "s3request_p.h"
#include "getobjectrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectRequest;

class GetObjectRequestPrivate : public S3RequestPrivate {

public:
    GetObjectRequestPrivate(const S3Request::Action action,
                                   GetObjectRequest * const q);
    GetObjectRequestPrivate(const GetObjectRequestPrivate &other,
                                   GetObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectRequest)

};

} // namespace S3
} // namespace QtAws

#endif
