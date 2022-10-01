// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMMITTRANSACTIONREQUEST_P_H
#define QTAWS_COMMITTRANSACTIONREQUEST_P_H

#include "rdsdatarequest_p.h"
#include "committransactionrequest.h"

namespace QtAws {
namespace RdsData {

class CommitTransactionRequest;

class CommitTransactionRequestPrivate : public RdsDataRequestPrivate {

public:
    CommitTransactionRequestPrivate(const RdsDataRequest::Action action,
                                   CommitTransactionRequest * const q);
    CommitTransactionRequestPrivate(const CommitTransactionRequestPrivate &other,
                                   CommitTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CommitTransactionRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
