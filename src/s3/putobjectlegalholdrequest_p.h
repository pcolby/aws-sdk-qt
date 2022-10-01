// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTLEGALHOLDREQUEST_P_H
#define QTAWS_PUTOBJECTLEGALHOLDREQUEST_P_H

#include "s3request_p.h"
#include "putobjectlegalholdrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectLegalHoldRequest;

class PutObjectLegalHoldRequestPrivate : public S3RequestPrivate {

public:
    PutObjectLegalHoldRequestPrivate(const S3Request::Action action,
                                   PutObjectLegalHoldRequest * const q);
    PutObjectLegalHoldRequestPrivate(const PutObjectLegalHoldRequestPrivate &other,
                                   PutObjectLegalHoldRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectLegalHoldRequest)

};

} // namespace S3
} // namespace QtAws

#endif
