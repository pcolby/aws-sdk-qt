// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELEDGERREQUEST_P_H
#define QTAWS_UPDATELEDGERREQUEST_P_H

#include "qldbrequest_p.h"
#include "updateledgerrequest.h"

namespace QtAws {
namespace Qldb {

class UpdateLedgerRequest;

class UpdateLedgerRequestPrivate : public QldbRequestPrivate {

public:
    UpdateLedgerRequestPrivate(const QldbRequest::Action action,
                                   UpdateLedgerRequest * const q);
    UpdateLedgerRequestPrivate(const UpdateLedgerRequestPrivate &other,
                                   UpdateLedgerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
