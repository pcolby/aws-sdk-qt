// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSERVERREQUEST_P_H
#define QTAWS_STOPSERVERREQUEST_P_H

#include "transferrequest_p.h"
#include "stopserverrequest.h"

namespace QtAws {
namespace Transfer {

class StopServerRequest;

class StopServerRequestPrivate : public TransferRequestPrivate {

public:
    StopServerRequestPrivate(const TransferRequest::Action action,
                                   StopServerRequest * const q);
    StopServerRequestPrivate(const StopServerRequestPrivate &other,
                                   StopServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
