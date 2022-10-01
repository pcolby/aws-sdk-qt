// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTACLREQUEST_P_H
#define QTAWS_GETOBJECTACLREQUEST_P_H

#include "s3request_p.h"
#include "getobjectaclrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectAclRequest;

class GetObjectAclRequestPrivate : public S3RequestPrivate {

public:
    GetObjectAclRequestPrivate(const S3Request::Action action,
                                   GetObjectAclRequest * const q);
    GetObjectAclRequestPrivate(const GetObjectAclRequestPrivate &other,
                                   GetObjectAclRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectAclRequest)

};

} // namespace S3
} // namespace QtAws

#endif
