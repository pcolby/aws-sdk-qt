// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVERREQUEST_P_H
#define QTAWS_CREATESERVERREQUEST_P_H

#include "transferrequest_p.h"
#include "createserverrequest.h"

namespace QtAws {
namespace Transfer {

class CreateServerRequest;

class CreateServerRequestPrivate : public TransferRequestPrivate {

public:
    CreateServerRequestPrivate(const TransferRequest::Action action,
                                   CreateServerRequest * const q);
    CreateServerRequestPrivate(const CreateServerRequestPrivate &other,
                                   CreateServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
