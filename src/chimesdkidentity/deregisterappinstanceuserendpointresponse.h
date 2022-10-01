// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERAPPINSTANCEUSERENDPOINTRESPONSE_H
#define QTAWS_DEREGISTERAPPINSTANCEUSERENDPOINTRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "deregisterappinstanceuserendpointrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeregisterAppInstanceUserEndpointResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DeregisterAppInstanceUserEndpointResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    DeregisterAppInstanceUserEndpointResponse(const DeregisterAppInstanceUserEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterAppInstanceUserEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterAppInstanceUserEndpointResponse)
    Q_DISABLE_COPY(DeregisterAppInstanceUserEndpointResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
