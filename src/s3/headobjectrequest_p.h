// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEADOBJECTREQUEST_P_H
#define QTAWS_HEADOBJECTREQUEST_P_H

#include "s3request_p.h"
#include "headobjectrequest.h"

namespace QtAws {
namespace S3 {

class HeadObjectRequest;

class HeadObjectRequestPrivate : public S3RequestPrivate {

public:
    HeadObjectRequestPrivate(const S3Request::Action action,
                                   HeadObjectRequest * const q);
    HeadObjectRequestPrivate(const HeadObjectRequestPrivate &other,
                                   HeadObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(HeadObjectRequest)

};

} // namespace S3
} // namespace QtAws

#endif
