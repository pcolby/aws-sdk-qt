// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTPARTICIPANTREQUEST_H
#define QTAWS_DISCONNECTPARTICIPANTREQUEST_H

#include "connectparticipantrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class DisconnectParticipantRequestPrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT DisconnectParticipantRequest : public ConnectParticipantRequest {

public:
    DisconnectParticipantRequest(const DisconnectParticipantRequest &other);
    DisconnectParticipantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectParticipantRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
