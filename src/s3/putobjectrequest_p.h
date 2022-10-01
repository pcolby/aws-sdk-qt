// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTREQUEST_P_H
#define QTAWS_PUTOBJECTREQUEST_P_H

#include "s3request_p.h"
#include "putobjectrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectRequest;

class PutObjectRequestPrivate : public S3RequestPrivate {

public:
    PutObjectRequestPrivate(const S3Request::Action action,
                                   PutObjectRequest * const q);
    PutObjectRequestPrivate(const PutObjectRequestPrivate &other,
                                   PutObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectRequest)

};

} // namespace S3
} // namespace QtAws

#endif
