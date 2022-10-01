// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSERVERREQUEST_P_H
#define QTAWS_STARTSERVERREQUEST_P_H

#include "transferrequest_p.h"
#include "startserverrequest.h"

namespace QtAws {
namespace Transfer {

class StartServerRequest;

class StartServerRequestPrivate : public TransferRequestPrivate {

public:
    StartServerRequestPrivate(const TransferRequest::Action action,
                                   StartServerRequest * const q);
    StartServerRequestPrivate(const StartServerRequestPrivate &other,
                                   StartServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
