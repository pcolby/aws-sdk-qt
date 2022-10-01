// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTLOCKCONFIGURATIONREQUEST_P_H
#define QTAWS_GETOBJECTLOCKCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "getobjectlockconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectLockConfigurationRequest;

class GetObjectLockConfigurationRequestPrivate : public S3RequestPrivate {

public:
    GetObjectLockConfigurationRequestPrivate(const S3Request::Action action,
                                   GetObjectLockConfigurationRequest * const q);
    GetObjectLockConfigurationRequestPrivate(const GetObjectLockConfigurationRequestPrivate &other,
                                   GetObjectLockConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectLockConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
