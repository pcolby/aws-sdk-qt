// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELEXBOTREQUEST_P_H
#define QTAWS_ASSOCIATELEXBOTREQUEST_P_H

#include "connectrequest_p.h"
#include "associatelexbotrequest.h"

namespace QtAws {
namespace Connect {

class AssociateLexBotRequest;

class AssociateLexBotRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateLexBotRequestPrivate(const ConnectRequest::Action action,
                                   AssociateLexBotRequest * const q);
    AssociateLexBotRequestPrivate(const AssociateLexBotRequestPrivate &other,
                                   AssociateLexBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateLexBotRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
