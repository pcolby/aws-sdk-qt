// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTREQUEST_H
#define QTAWS_CREATEENDPOINTREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class CreateEndpointRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT CreateEndpointRequest : public EventBridgeRequest {

public:
    CreateEndpointRequest(const CreateEndpointRequest &other);
    CreateEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
