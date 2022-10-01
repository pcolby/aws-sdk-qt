// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERCONTACTREQUEST_P_H
#define QTAWS_TRANSFERCONTACTREQUEST_P_H

#include "connectrequest_p.h"
#include "transfercontactrequest.h"

namespace QtAws {
namespace Connect {

class TransferContactRequest;

class TransferContactRequestPrivate : public ConnectRequestPrivate {

public:
    TransferContactRequestPrivate(const ConnectRequest::Action action,
                                   TransferContactRequest * const q);
    TransferContactRequestPrivate(const TransferContactRequestPrivate &other,
                                   TransferContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(TransferContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
