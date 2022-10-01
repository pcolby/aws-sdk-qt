// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPREQUEST_P_H
#define QTAWS_DELETEBACKUPREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "deletebackuprequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DeleteBackupRequest;

class DeleteBackupRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    DeleteBackupRequestPrivate(const OpsWorksCmRequest::Action action,
                                   DeleteBackupRequest * const q);
    DeleteBackupRequestPrivate(const DeleteBackupRequestPrivate &other,
                                   DeleteBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
