// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEDEVICEIDENTIFIERRESPONSE_P_H
#define QTAWS_ACTIVATEDEVICEIDENTIFIERRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class ActivateDeviceIdentifierResponse;

class ActivateDeviceIdentifierResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit ActivateDeviceIdentifierResponsePrivate(ActivateDeviceIdentifierResponse * const q);

    void parseActivateDeviceIdentifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateDeviceIdentifierResponse)
    Q_DISABLE_COPY(ActivateDeviceIdentifierResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
