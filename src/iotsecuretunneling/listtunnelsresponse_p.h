// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTUNNELSRESPONSE_P_H
#define QTAWS_LISTTUNNELSRESPONSE_P_H

#include "iotsecuretunnelingresponse_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

class ListTunnelsResponse;

class ListTunnelsResponsePrivate : public IoTSecureTunnelingResponsePrivate {

public:

    explicit ListTunnelsResponsePrivate(ListTunnelsResponse * const q);

    void parseListTunnelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTunnelsResponse)
    Q_DISABLE_COPY(ListTunnelsResponsePrivate)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
