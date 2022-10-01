// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTOBJECTREQUEST_P_H
#define QTAWS_STARTOBJECTREQUEST_P_H

#include "backupstoragerequest_p.h"
#include "startobjectrequest.h"

namespace QtAws {
namespace BackupStorage {

class StartObjectRequest;

class StartObjectRequestPrivate : public BackupStorageRequestPrivate {

public:
    StartObjectRequestPrivate(const BackupStorageRequest::Action action,
                                   StartObjectRequest * const q);
    StartObjectRequestPrivate(const StartObjectRequestPrivate &other,
                                   StartObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartObjectRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
