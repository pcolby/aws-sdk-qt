// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTREQUEST_P_H
#define QTAWS_PUTOBJECTREQUEST_P_H

#include "backupstoragerequest_p.h"
#include "putobjectrequest.h"

namespace QtAws {
namespace BackupStorage {

class PutObjectRequest;

class PutObjectRequestPrivate : public BackupStorageRequestPrivate {

public:
    PutObjectRequestPrivate(const BackupStorageRequest::Action action,
                                   PutObjectRequest * const q);
    PutObjectRequestPrivate(const PutObjectRequestPrivate &other,
                                   PutObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
