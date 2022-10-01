// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BEGINTRANSACTIONREQUEST_P_H
#define QTAWS_BEGINTRANSACTIONREQUEST_P_H

#include "rdsdatarequest_p.h"
#include "begintransactionrequest.h"

namespace QtAws {
namespace RdsData {

class BeginTransactionRequest;

class BeginTransactionRequestPrivate : public RdsDataRequestPrivate {

public:
    BeginTransactionRequestPrivate(const RdsDataRequest::Action action,
                                   BeginTransactionRequest * const q);
    BeginTransactionRequestPrivate(const BeginTransactionRequestPrivate &other,
                                   BeginTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BeginTransactionRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
