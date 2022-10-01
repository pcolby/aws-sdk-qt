// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTBUSREQUEST_H
#define QTAWS_CREATEEVENTBUSREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class CreateEventBusRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT CreateEventBusRequest : public EventBridgeRequest {

public:
    CreateEventBusRequest(const CreateEventBusRequest &other);
    CreateEventBusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventBusRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
