// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSBYRESOURCEREQUEST_P_H
#define QTAWS_LISTRECOVERYPOINTSBYRESOURCEREQUEST_P_H

#include "backuprequest_p.h"
#include "listrecoverypointsbyresourcerequest.h"

namespace QtAws {
namespace Backup {

class ListRecoveryPointsByResourceRequest;

class ListRecoveryPointsByResourceRequestPrivate : public BackupRequestPrivate {

public:
    ListRecoveryPointsByResourceRequestPrivate(const BackupRequest::Action action,
                                   ListRecoveryPointsByResourceRequest * const q);
    ListRecoveryPointsByResourceRequestPrivate(const ListRecoveryPointsByResourceRequestPrivate &other,
                                   ListRecoveryPointsByResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecoveryPointsByResourceRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
