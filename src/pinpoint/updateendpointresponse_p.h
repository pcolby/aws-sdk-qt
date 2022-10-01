// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTRESPONSE_P_H
#define QTAWS_UPDATEENDPOINTRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEndpointResponse;

class UpdateEndpointResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateEndpointResponsePrivate(UpdateEndpointResponse * const q);

    void parseUpdateEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointResponse)
    Q_DISABLE_COPY(UpdateEndpointResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
