// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEFLOWENTITLEMENTRESPONSE_P_H
#define QTAWS_REVOKEFLOWENTITLEMENTRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class RevokeFlowEntitlementResponse;

class RevokeFlowEntitlementResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit RevokeFlowEntitlementResponsePrivate(RevokeFlowEntitlementResponse * const q);

    void parseRevokeFlowEntitlementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeFlowEntitlementResponse)
    Q_DISABLE_COPY(RevokeFlowEntitlementResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
