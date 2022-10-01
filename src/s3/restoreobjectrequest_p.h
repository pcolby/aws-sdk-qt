// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREOBJECTREQUEST_P_H
#define QTAWS_RESTOREOBJECTREQUEST_P_H

#include "s3request_p.h"
#include "restoreobjectrequest.h"

namespace QtAws {
namespace S3 {

class RestoreObjectRequest;

class RestoreObjectRequestPrivate : public S3RequestPrivate {

public:
    RestoreObjectRequestPrivate(const S3Request::Action action,
                                   RestoreObjectRequest * const q);
    RestoreObjectRequestPrivate(const RestoreObjectRequestPrivate &other,
                                   RestoreObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreObjectRequest)

};

} // namespace S3
} // namespace QtAws

#endif
