// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYOBJECTCOMPLETEREQUEST_P_H
#define QTAWS_NOTIFYOBJECTCOMPLETEREQUEST_P_H

#include "backupstoragerequest_p.h"
#include "notifyobjectcompleterequest.h"

namespace QtAws {
namespace BackupStorage {

class NotifyObjectCompleteRequest;

class NotifyObjectCompleteRequestPrivate : public BackupStorageRequestPrivate {

public:
    NotifyObjectCompleteRequestPrivate(const BackupStorageRequest::Action action,
                                   NotifyObjectCompleteRequest * const q);
    NotifyObjectCompleteRequestPrivate(const NotifyObjectCompleteRequestPrivate &other,
                                   NotifyObjectCompleteRequest * const q);

private:
    Q_DECLARE_PUBLIC(NotifyObjectCompleteRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
