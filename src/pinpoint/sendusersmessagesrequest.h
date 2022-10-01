// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDUSERSMESSAGESREQUEST_H
#define QTAWS_SENDUSERSMESSAGESREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class SendUsersMessagesRequestPrivate;

class QTAWSPINPOINT_EXPORT SendUsersMessagesRequest : public PinpointRequest {

public:
    SendUsersMessagesRequest(const SendUsersMessagesRequest &other);
    SendUsersMessagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendUsersMessagesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
