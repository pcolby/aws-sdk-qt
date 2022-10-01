// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELEDGERREQUEST_P_H
#define QTAWS_CREATELEDGERREQUEST_P_H

#include "qldbrequest_p.h"
#include "createledgerrequest.h"

namespace QtAws {
namespace Qldb {

class CreateLedgerRequest;

class CreateLedgerRequestPrivate : public QldbRequestPrivate {

public:
    CreateLedgerRequestPrivate(const QldbRequest::Action action,
                                   CreateLedgerRequest * const q);
    CreateLedgerRequestPrivate(const CreateLedgerRequestPrivate &other,
                                   CreateLedgerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
