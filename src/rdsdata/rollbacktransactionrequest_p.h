// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKTRANSACTIONREQUEST_P_H
#define QTAWS_ROLLBACKTRANSACTIONREQUEST_P_H

#include "rdsdatarequest_p.h"
#include "rollbacktransactionrequest.h"

namespace QtAws {
namespace RdsData {

class RollbackTransactionRequest;

class RollbackTransactionRequestPrivate : public RdsDataRequestPrivate {

public:
    RollbackTransactionRequestPrivate(const RdsDataRequest::Action action,
                                   RollbackTransactionRequest * const q);
    RollbackTransactionRequestPrivate(const RollbackTransactionRequestPrivate &other,
                                   RollbackTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RollbackTransactionRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
