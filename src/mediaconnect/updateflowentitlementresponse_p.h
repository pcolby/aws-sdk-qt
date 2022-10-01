// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWENTITLEMENTRESPONSE_P_H
#define QTAWS_UPDATEFLOWENTITLEMENTRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowEntitlementResponse;

class UpdateFlowEntitlementResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit UpdateFlowEntitlementResponsePrivate(UpdateFlowEntitlementResponse * const q);

    void parseUpdateFlowEntitlementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFlowEntitlementResponse)
    Q_DISABLE_COPY(UpdateFlowEntitlementResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
