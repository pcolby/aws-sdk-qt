// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICERESPONSE_P_H
#define QTAWS_DELETEDEVICERESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeleteDeviceResponse;

class DeleteDeviceResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeleteDeviceResponsePrivate(DeleteDeviceResponse * const q);

    void parseDeleteDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceResponse)
    Q_DISABLE_COPY(DeleteDeviceResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
