// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAPPINSTANCEUSERENDPOINTRESPONSE_H
#define QTAWS_REGISTERAPPINSTANCEUSERENDPOINTRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "registerappinstanceuserendpointrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class RegisterAppInstanceUserEndpointResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT RegisterAppInstanceUserEndpointResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    RegisterAppInstanceUserEndpointResponse(const RegisterAppInstanceUserEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterAppInstanceUserEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterAppInstanceUserEndpointResponse)
    Q_DISABLE_COPY(RegisterAppInstanceUserEndpointResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
