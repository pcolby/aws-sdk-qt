// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERECOVERYPOINTREQUEST_P_H
#define QTAWS_DISASSOCIATERECOVERYPOINTREQUEST_P_H

#include "backuprequest_p.h"
#include "disassociaterecoverypointrequest.h"

namespace QtAws {
namespace Backup {

class DisassociateRecoveryPointRequest;

class DisassociateRecoveryPointRequestPrivate : public BackupRequestPrivate {

public:
    DisassociateRecoveryPointRequestPrivate(const BackupRequest::Action action,
                                   DisassociateRecoveryPointRequest * const q);
    DisassociateRecoveryPointRequestPrivate(const DisassociateRecoveryPointRequestPrivate &other,
                                   DisassociateRecoveryPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateRecoveryPointRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
