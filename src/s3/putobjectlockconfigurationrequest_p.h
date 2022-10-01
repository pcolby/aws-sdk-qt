// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTLOCKCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTOBJECTLOCKCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putobjectlockconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectLockConfigurationRequest;

class PutObjectLockConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutObjectLockConfigurationRequestPrivate(const S3Request::Action action,
                                   PutObjectLockConfigurationRequest * const q);
    PutObjectLockConfigurationRequestPrivate(const PutObjectLockConfigurationRequestPrivate &other,
                                   PutObjectLockConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectLockConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
