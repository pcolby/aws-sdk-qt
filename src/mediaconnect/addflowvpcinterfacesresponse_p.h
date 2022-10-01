// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWVPCINTERFACESRESPONSE_P_H
#define QTAWS_ADDFLOWVPCINTERFACESRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowVpcInterfacesResponse;

class AddFlowVpcInterfacesResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit AddFlowVpcInterfacesResponsePrivate(AddFlowVpcInterfacesResponse * const q);

    void parseAddFlowVpcInterfacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddFlowVpcInterfacesResponse)
    Q_DISABLE_COPY(AddFlowVpcInterfacesResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
