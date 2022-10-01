// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWVPCINTERFACERESPONSE_P_H
#define QTAWS_REMOVEFLOWVPCINTERFACERESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowVpcInterfaceResponse;

class RemoveFlowVpcInterfaceResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit RemoveFlowVpcInterfaceResponsePrivate(RemoveFlowVpcInterfaceResponse * const q);

    void parseRemoveFlowVpcInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveFlowVpcInterfaceResponse)
    Q_DISABLE_COPY(RemoveFlowVpcInterfaceResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
