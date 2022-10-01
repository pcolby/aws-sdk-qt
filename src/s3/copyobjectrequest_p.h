// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYOBJECTREQUEST_P_H
#define QTAWS_COPYOBJECTREQUEST_P_H

#include "s3request_p.h"
#include "copyobjectrequest.h"

namespace QtAws {
namespace S3 {

class CopyObjectRequest;

class CopyObjectRequestPrivate : public S3RequestPrivate {

public:
    CopyObjectRequestPrivate(const S3Request::Action action,
                                   CopyObjectRequest * const q);
    CopyObjectRequestPrivate(const CopyObjectRequestPrivate &other,
                                   CopyObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyObjectRequest)

};

} // namespace S3
} // namespace QtAws

#endif
