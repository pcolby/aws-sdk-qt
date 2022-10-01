// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGESREQUEST_H
#define QTAWS_SENDMESSAGESREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class SendMessagesRequestPrivate;

class QTAWSPINPOINT_EXPORT SendMessagesRequest : public PinpointRequest {

public:
    SendMessagesRequest(const SendMessagesRequest &other);
    SendMessagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendMessagesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
