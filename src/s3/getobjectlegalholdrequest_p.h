// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTLEGALHOLDREQUEST_P_H
#define QTAWS_GETOBJECTLEGALHOLDREQUEST_P_H

#include "s3request_p.h"
#include "getobjectlegalholdrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectLegalHoldRequest;

class GetObjectLegalHoldRequestPrivate : public S3RequestPrivate {

public:
    GetObjectLegalHoldRequestPrivate(const S3Request::Action action,
                                   GetObjectLegalHoldRequest * const q);
    GetObjectLegalHoldRequestPrivate(const GetObjectLegalHoldRequestPrivate &other,
                                   GetObjectLegalHoldRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectLegalHoldRequest)

};

} // namespace S3
} // namespace QtAws

#endif
