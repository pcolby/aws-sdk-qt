// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAPPINSTANCEUSERENDPOINTRESPONSE_P_H
#define QTAWS_REGISTERAPPINSTANCEUSERENDPOINTRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class RegisterAppInstanceUserEndpointResponse;

class RegisterAppInstanceUserEndpointResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit RegisterAppInstanceUserEndpointResponsePrivate(RegisterAppInstanceUserEndpointResponse * const q);

    void parseRegisterAppInstanceUserEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterAppInstanceUserEndpointResponse)
    Q_DISABLE_COPY(RegisterAppInstanceUserEndpointResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
