// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTREQUEST_H
#define QTAWS_UPDATEENDPOINTREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class UpdateEndpointRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT UpdateEndpointRequest : public EventBridgeRequest {

public:
    UpdateEndpointRequest(const UpdateEndpointRequest &other);
    UpdateEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
