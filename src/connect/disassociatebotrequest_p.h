// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBOTREQUEST_P_H
#define QTAWS_DISASSOCIATEBOTREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociatebotrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateBotRequest;

class DisassociateBotRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociateBotRequestPrivate(const ConnectRequest::Action action,
                                   DisassociateBotRequest * const q);
    DisassociateBotRequestPrivate(const DisassociateBotRequestPrivate &other,
                                   DisassociateBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateBotRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
