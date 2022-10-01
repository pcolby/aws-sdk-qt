// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAPPINSTANCEUSERENDPOINTREQUEST_H
#define QTAWS_REGISTERAPPINSTANCEUSERENDPOINTREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class RegisterAppInstanceUserEndpointRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT RegisterAppInstanceUserEndpointRequest : public ChimeSdkIdentityRequest {

public:
    RegisterAppInstanceUserEndpointRequest(const RegisterAppInstanceUserEndpointRequest &other);
    RegisterAppInstanceUserEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterAppInstanceUserEndpointRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
