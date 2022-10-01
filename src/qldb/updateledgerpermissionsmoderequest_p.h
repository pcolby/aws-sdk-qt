// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELEDGERPERMISSIONSMODEREQUEST_P_H
#define QTAWS_UPDATELEDGERPERMISSIONSMODEREQUEST_P_H

#include "qldbrequest_p.h"
#include "updateledgerpermissionsmoderequest.h"

namespace QtAws {
namespace Qldb {

class UpdateLedgerPermissionsModeRequest;

class UpdateLedgerPermissionsModeRequestPrivate : public QldbRequestPrivate {

public:
    UpdateLedgerPermissionsModeRequestPrivate(const QldbRequest::Action action,
                                   UpdateLedgerPermissionsModeRequest * const q);
    UpdateLedgerPermissionsModeRequestPrivate(const UpdateLedgerPermissionsModeRequestPrivate &other,
                                   UpdateLedgerPermissionsModeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLedgerPermissionsModeRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
