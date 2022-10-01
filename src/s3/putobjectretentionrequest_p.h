// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTRETENTIONREQUEST_P_H
#define QTAWS_PUTOBJECTRETENTIONREQUEST_P_H

#include "s3request_p.h"
#include "putobjectretentionrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectRetentionRequest;

class PutObjectRetentionRequestPrivate : public S3RequestPrivate {

public:
    PutObjectRetentionRequestPrivate(const S3Request::Action action,
                                   PutObjectRetentionRequest * const q);
    PutObjectRetentionRequestPrivate(const PutObjectRetentionRequestPrivate &other,
                                   PutObjectRetentionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectRetentionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
