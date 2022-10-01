// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGEREQUEST_P_H
#define QTAWS_SENDMESSAGEREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "sendmessagerequest.h"

namespace QtAws {
namespace ConnectParticipant {

class SendMessageRequest;

class SendMessageRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    SendMessageRequestPrivate(const ConnectParticipantRequest::Action action,
                                   SendMessageRequest * const q);
    SendMessageRequestPrivate(const SendMessageRequestPrivate &other,
                                   SendMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendMessageRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
