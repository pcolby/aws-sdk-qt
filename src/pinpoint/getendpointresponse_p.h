// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTRESPONSE_P_H
#define QTAWS_GETENDPOINTRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetEndpointResponse;

class GetEndpointResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetEndpointResponsePrivate(GetEndpointResponse * const q);

    void parseGetEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEndpointResponse)
    Q_DISABLE_COPY(GetEndpointResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
