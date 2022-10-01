// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTICIPANTCONNECTIONREQUEST_P_H
#define QTAWS_CREATEPARTICIPANTCONNECTIONREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "createparticipantconnectionrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class CreateParticipantConnectionRequest;

class CreateParticipantConnectionRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    CreateParticipantConnectionRequestPrivate(const ConnectParticipantRequest::Action action,
                                   CreateParticipantConnectionRequest * const q);
    CreateParticipantConnectionRequestPrivate(const CreateParticipantConnectionRequestPrivate &other,
                                   CreateParticipantConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateParticipantConnectionRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
