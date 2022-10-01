// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTVPNENDPOINTRESPONSE_P_H
#define QTAWS_DELETECLIENTVPNENDPOINTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteClientVpnEndpointResponse;

class DeleteClientVpnEndpointResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteClientVpnEndpointResponsePrivate(DeleteClientVpnEndpointResponse * const q);

    void parseDeleteClientVpnEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClientVpnEndpointResponse)
    Q_DISABLE_COPY(DeleteClientVpnEndpointResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
