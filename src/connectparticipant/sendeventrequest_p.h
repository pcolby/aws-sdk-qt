// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEVENTREQUEST_P_H
#define QTAWS_SENDEVENTREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "sendeventrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class SendEventRequest;

class SendEventRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    SendEventRequestPrivate(const ConnectParticipantRequest::Action action,
                                   SendEventRequest * const q);
    SendEventRequestPrivate(const SendEventRequestPrivate &other,
                                   SendEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendEventRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
