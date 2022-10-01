// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERENDPOINTSRESPONSE_P_H
#define QTAWS_GETUSERENDPOINTSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetUserEndpointsResponse;

class GetUserEndpointsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetUserEndpointsResponsePrivate(GetUserEndpointsResponse * const q);

    void parseGetUserEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserEndpointsResponse)
    Q_DISABLE_COPY(GetUserEndpointsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
