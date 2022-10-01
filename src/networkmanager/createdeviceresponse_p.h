// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICERESPONSE_P_H
#define QTAWS_CREATEDEVICERESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateDeviceResponse;

class CreateDeviceResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateDeviceResponsePrivate(CreateDeviceResponse * const q);

    void parseCreateDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeviceResponse)
    Q_DISABLE_COPY(CreateDeviceResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
