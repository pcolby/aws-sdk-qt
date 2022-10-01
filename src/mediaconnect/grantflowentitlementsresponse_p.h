// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTFLOWENTITLEMENTSRESPONSE_P_H
#define QTAWS_GRANTFLOWENTITLEMENTSRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class GrantFlowEntitlementsResponse;

class GrantFlowEntitlementsResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit GrantFlowEntitlementsResponsePrivate(GrantFlowEntitlementsResponse * const q);

    void parseGrantFlowEntitlementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GrantFlowEntitlementsResponse)
    Q_DISABLE_COPY(GrantFlowEntitlementsResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
