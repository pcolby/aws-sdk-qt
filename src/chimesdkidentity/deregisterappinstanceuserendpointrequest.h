// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERAPPINSTANCEUSERENDPOINTREQUEST_H
#define QTAWS_DEREGISTERAPPINSTANCEUSERENDPOINTREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeregisterAppInstanceUserEndpointRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DeregisterAppInstanceUserEndpointRequest : public ChimeSdkIdentityRequest {

public:
    DeregisterAppInstanceUserEndpointRequest(const DeregisterAppInstanceUserEndpointRequest &other);
    DeregisterAppInstanceUserEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterAppInstanceUserEndpointRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
