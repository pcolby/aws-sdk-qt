// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSESREQUEST_P_H
#define QTAWS_LISTACCESSESREQUEST_P_H

#include "transferrequest_p.h"
#include "listaccessesrequest.h"

namespace QtAws {
namespace Transfer {

class ListAccessesRequest;

class ListAccessesRequestPrivate : public TransferRequestPrivate {

public:
    ListAccessesRequestPrivate(const TransferRequest::Action action,
                                   ListAccessesRequest * const q);
    ListAccessesRequestPrivate(const ListAccessesRequestPrivate &other,
                                   ListAccessesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessesRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
