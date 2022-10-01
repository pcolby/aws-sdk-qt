// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERENDPOINTRESPONSE_P_H
#define QTAWS_UPDATEAPPINSTANCEUSERENDPOINTRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceUserEndpointResponse;

class UpdateAppInstanceUserEndpointResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit UpdateAppInstanceUserEndpointResponsePrivate(UpdateAppInstanceUserEndpointResponse * const q);

    void parseUpdateAppInstanceUserEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAppInstanceUserEndpointResponse)
    Q_DISABLE_COPY(UpdateAppInstanceUserEndpointResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
