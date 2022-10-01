// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATECLIENTVPNCONNECTIONSRESPONSE_P_H
#define QTAWS_TERMINATECLIENTVPNCONNECTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class TerminateClientVpnConnectionsResponse;

class TerminateClientVpnConnectionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit TerminateClientVpnConnectionsResponsePrivate(TerminateClientVpnConnectionsResponse * const q);

    void parseTerminateClientVpnConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateClientVpnConnectionsResponse)
    Q_DISABLE_COPY(TerminateClientVpnConnectionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
