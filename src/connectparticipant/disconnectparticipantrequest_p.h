// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTPARTICIPANTREQUEST_P_H
#define QTAWS_DISCONNECTPARTICIPANTREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "disconnectparticipantrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class DisconnectParticipantRequest;

class DisconnectParticipantRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    DisconnectParticipantRequestPrivate(const ConnectParticipantRequest::Action action,
                                   DisconnectParticipantRequest * const q);
    DisconnectParticipantRequestPrivate(const DisconnectParticipantRequestPrivate &other,
                                   DisconnectParticipantRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisconnectParticipantRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
