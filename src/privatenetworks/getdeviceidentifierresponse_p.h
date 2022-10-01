// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEIDENTIFIERRESPONSE_P_H
#define QTAWS_GETDEVICEIDENTIFIERRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class GetDeviceIdentifierResponse;

class GetDeviceIdentifierResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit GetDeviceIdentifierResponsePrivate(GetDeviceIdentifierResponse * const q);

    void parseGetDeviceIdentifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceIdentifierResponse)
    Q_DISABLE_COPY(GetDeviceIdentifierResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
