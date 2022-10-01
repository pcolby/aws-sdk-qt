// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBONUSPAYMENTSREQUEST_P_H
#define QTAWS_LISTBONUSPAYMENTSREQUEST_P_H

#include "mturkrequest_p.h"
#include "listbonuspaymentsrequest.h"

namespace QtAws {
namespace MTurk {

class ListBonusPaymentsRequest;

class ListBonusPaymentsRequestPrivate : public MTurkRequestPrivate {

public:
    ListBonusPaymentsRequestPrivate(const MTurkRequest::Action action,
                                   ListBonusPaymentsRequest * const q);
    ListBonusPaymentsRequestPrivate(const ListBonusPaymentsRequestPrivate &other,
                                   ListBonusPaymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBonusPaymentsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
