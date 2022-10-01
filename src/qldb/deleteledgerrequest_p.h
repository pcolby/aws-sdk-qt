// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELEDGERREQUEST_P_H
#define QTAWS_DELETELEDGERREQUEST_P_H

#include "qldbrequest_p.h"
#include "deleteledgerrequest.h"

namespace QtAws {
namespace Qldb {

class DeleteLedgerRequest;

class DeleteLedgerRequestPrivate : public QldbRequestPrivate {

public:
    DeleteLedgerRequestPrivate(const QldbRequest::Action action,
                                   DeleteLedgerRequest * const q);
    DeleteLedgerRequestPrivate(const DeleteLedgerRequestPrivate &other,
                                   DeleteLedgerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
