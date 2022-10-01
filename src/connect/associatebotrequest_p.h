// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBOTREQUEST_P_H
#define QTAWS_ASSOCIATEBOTREQUEST_P_H

#include "connectrequest_p.h"
#include "associatebotrequest.h"

namespace QtAws {
namespace Connect {

class AssociateBotRequest;

class AssociateBotRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateBotRequestPrivate(const ConnectRequest::Action action,
                                   AssociateBotRequest * const q);
    AssociateBotRequestPrivate(const AssociateBotRequestPrivate &other,
                                   AssociateBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateBotRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
