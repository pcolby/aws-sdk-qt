// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELEXBOTREQUEST_P_H
#define QTAWS_DISASSOCIATELEXBOTREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociatelexbotrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateLexBotRequest;

class DisassociateLexBotRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociateLexBotRequestPrivate(const ConnectRequest::Action action,
                                   DisassociateLexBotRequest * const q);
    DisassociateLexBotRequestPrivate(const DisassociateLexBotRequestPrivate &other,
                                   DisassociateLexBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateLexBotRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
