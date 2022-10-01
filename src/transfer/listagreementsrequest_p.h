// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGREEMENTSREQUEST_P_H
#define QTAWS_LISTAGREEMENTSREQUEST_P_H

#include "transferrequest_p.h"
#include "listagreementsrequest.h"

namespace QtAws {
namespace Transfer {

class ListAgreementsRequest;

class ListAgreementsRequestPrivate : public TransferRequestPrivate {

public:
    ListAgreementsRequestPrivate(const TransferRequest::Action action,
                                   ListAgreementsRequest * const q);
    ListAgreementsRequestPrivate(const ListAgreementsRequestPrivate &other,
                                   ListAgreementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAgreementsRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
