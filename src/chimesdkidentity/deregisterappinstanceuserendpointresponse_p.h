// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERAPPINSTANCEUSERENDPOINTRESPONSE_P_H
#define QTAWS_DEREGISTERAPPINSTANCEUSERENDPOINTRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeregisterAppInstanceUserEndpointResponse;

class DeregisterAppInstanceUserEndpointResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit DeregisterAppInstanceUserEndpointResponsePrivate(DeregisterAppInstanceUserEndpointResponse * const q);

    void parseDeregisterAppInstanceUserEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterAppInstanceUserEndpointResponse)
    Q_DISABLE_COPY(DeregisterAppInstanceUserEndpointResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
