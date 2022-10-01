// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHATCONTACTREQUEST_P_H
#define QTAWS_STARTCHATCONTACTREQUEST_P_H

#include "connectrequest_p.h"
#include "startchatcontactrequest.h"

namespace QtAws {
namespace Connect {

class StartChatContactRequest;

class StartChatContactRequestPrivate : public ConnectRequestPrivate {

public:
    StartChatContactRequestPrivate(const ConnectRequest::Action action,
                                   StartChatContactRequest * const q);
    StartChatContactRequestPrivate(const StartChatContactRequestPrivate &other,
                                   StartChatContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartChatContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
