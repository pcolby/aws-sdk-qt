// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTRETENTIONREQUEST_P_H
#define QTAWS_GETOBJECTRETENTIONREQUEST_P_H

#include "s3request_p.h"
#include "getobjectretentionrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectRetentionRequest;

class GetObjectRetentionRequestPrivate : public S3RequestPrivate {

public:
    GetObjectRetentionRequestPrivate(const S3Request::Action action,
                                   GetObjectRetentionRequest * const q);
    GetObjectRetentionRequestPrivate(const GetObjectRetentionRequestPrivate &other,
                                   GetObjectRetentionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectRetentionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
