// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROUTINGPROFILEQUEUESRESPONSE_P_H
#define QTAWS_DISASSOCIATEROUTINGPROFILEQUEUESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociateRoutingProfileQueuesResponse;

class DisassociateRoutingProfileQueuesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociateRoutingProfileQueuesResponsePrivate(DisassociateRoutingProfileQueuesResponse * const q);

    void parseDisassociateRoutingProfileQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateRoutingProfileQueuesResponse)
    Q_DISABLE_COPY(DisassociateRoutingProfileQueuesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
