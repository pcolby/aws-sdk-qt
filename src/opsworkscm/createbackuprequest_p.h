// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPREQUEST_P_H
#define QTAWS_CREATEBACKUPREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "createbackuprequest.h"

namespace QtAws {
namespace OpsWorksCm {

class CreateBackupRequest;

class CreateBackupRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    CreateBackupRequestPrivate(const OpsWorksCmRequest::Action action,
                                   CreateBackupRequest * const q);
    CreateBackupRequestPrivate(const CreateBackupRequestPrivate &other,
                                   CreateBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackupRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
