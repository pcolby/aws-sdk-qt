// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERENDPOINTREQUEST_H
#define QTAWS_UPDATEAPPINSTANCEUSERENDPOINTREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceUserEndpointRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT UpdateAppInstanceUserEndpointRequest : public ChimeSdkIdentityRequest {

public:
    UpdateAppInstanceUserEndpointRequest(const UpdateAppInstanceUserEndpointRequest &other);
    UpdateAppInstanceUserEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppInstanceUserEndpointRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
