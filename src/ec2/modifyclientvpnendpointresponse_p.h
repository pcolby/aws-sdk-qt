// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLIENTVPNENDPOINTRESPONSE_P_H
#define QTAWS_MODIFYCLIENTVPNENDPOINTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyClientVpnEndpointResponse;

class ModifyClientVpnEndpointResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyClientVpnEndpointResponsePrivate(ModifyClientVpnEndpointResponse * const q);

    void parseModifyClientVpnEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClientVpnEndpointResponse)
    Q_DISABLE_COPY(ModifyClientVpnEndpointResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
