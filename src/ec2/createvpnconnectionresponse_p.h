// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNCONNECTIONRESPONSE_P_H
#define QTAWS_CREATEVPNCONNECTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnConnectionResponse;

class CreateVpnConnectionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateVpnConnectionResponsePrivate(CreateVpnConnectionResponse * const q);

    void parseCreateVpnConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpnConnectionResponse)
    Q_DISABLE_COPY(CreateVpnConnectionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
