// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTACLREQUEST_P_H
#define QTAWS_PUTOBJECTACLREQUEST_P_H

#include "s3request_p.h"
#include "putobjectaclrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectAclRequest;

class PutObjectAclRequestPrivate : public S3RequestPrivate {

public:
    PutObjectAclRequestPrivate(const S3Request::Action action,
                                   PutObjectAclRequest * const q);
    PutObjectAclRequestPrivate(const PutObjectAclRequestPrivate &other,
                                   PutObjectAclRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectAclRequest)

};

} // namespace S3
} // namespace QtAws

#endif
