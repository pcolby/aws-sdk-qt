// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICESRESPONSE_P_H
#define QTAWS_GETDEVICESRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetDevicesResponse;

class GetDevicesResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetDevicesResponsePrivate(GetDevicesResponse * const q);

    void parseGetDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDevicesResponse)
    Q_DISABLE_COPY(GetDevicesResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
