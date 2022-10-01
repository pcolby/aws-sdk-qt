// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEVENTREQUEST_H
#define QTAWS_SENDEVENTREQUEST_H

#include "connectparticipantrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class SendEventRequestPrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT SendEventRequest : public ConnectParticipantRequest {

public:
    SendEventRequest(const SendEventRequest &other);
    SendEventRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendEventRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
