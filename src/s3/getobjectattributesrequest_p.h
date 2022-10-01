// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTATTRIBUTESREQUEST_P_H
#define QTAWS_GETOBJECTATTRIBUTESREQUEST_P_H

#include "s3request_p.h"
#include "getobjectattributesrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectAttributesRequest;

class GetObjectAttributesRequestPrivate : public S3RequestPrivate {

public:
    GetObjectAttributesRequestPrivate(const S3Request::Action action,
                                   GetObjectAttributesRequest * const q);
    GetObjectAttributesRequestPrivate(const GetObjectAttributesRequestPrivate &other,
                                   GetObjectAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectAttributesRequest)

};

} // namespace S3
} // namespace QtAws

#endif
