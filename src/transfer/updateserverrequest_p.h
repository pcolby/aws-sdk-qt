// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERREQUEST_P_H
#define QTAWS_UPDATESERVERREQUEST_P_H

#include "transferrequest_p.h"
#include "updateserverrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateServerRequest;

class UpdateServerRequestPrivate : public TransferRequestPrivate {

public:
    UpdateServerRequestPrivate(const TransferRequest::Action action,
                                   UpdateServerRequest * const q);
    UpdateServerRequestPrivate(const UpdateServerRequestPrivate &other,
                                   UpdateServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
