// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNCONNECTIONRESPONSE_P_H
#define QTAWS_DELETEVPNCONNECTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnConnectionResponse;

class DeleteVpnConnectionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteVpnConnectionResponsePrivate(DeleteVpnConnectionResponse * const q);

    void parseDeleteVpnConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpnConnectionResponse)
    Q_DISABLE_COPY(DeleteVpnConnectionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
