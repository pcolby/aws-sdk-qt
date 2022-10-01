// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTPARTICIPANTCLIENT_P_H
#define QTAWS_CONNECTPARTICIPANTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ConnectParticipant {

class ConnectParticipantClient;

class ConnectParticipantClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ConnectParticipantClientPrivate(ConnectParticipantClient * const q);

private:
    Q_DECLARE_PUBLIC(ConnectParticipantClient)
    Q_DISABLE_COPY(ConnectParticipantClientPrivate)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
