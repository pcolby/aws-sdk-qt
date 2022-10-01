// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTBALANCEREQUEST_P_H
#define QTAWS_GETACCOUNTBALANCEREQUEST_P_H

#include "mturkrequest_p.h"
#include "getaccountbalancerequest.h"

namespace QtAws {
namespace MTurk {

class GetAccountBalanceRequest;

class GetAccountBalanceRequestPrivate : public MTurkRequestPrivate {

public:
    GetAccountBalanceRequestPrivate(const MTurkRequest::Action action,
                                   GetAccountBalanceRequest * const q);
    GetAccountBalanceRequestPrivate(const GetAccountBalanceRequestPrivate &other,
                                   GetAccountBalanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountBalanceRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
