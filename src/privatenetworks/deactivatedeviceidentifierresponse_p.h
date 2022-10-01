// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEDEVICEIDENTIFIERRESPONSE_P_H
#define QTAWS_DEACTIVATEDEVICEIDENTIFIERRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class DeactivateDeviceIdentifierResponse;

class DeactivateDeviceIdentifierResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit DeactivateDeviceIdentifierResponsePrivate(DeactivateDeviceIdentifierResponse * const q);

    void parseDeactivateDeviceIdentifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivateDeviceIdentifierResponse)
    Q_DISABLE_COPY(DeactivateDeviceIdentifierResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
