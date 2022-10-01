// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKPROFILERESPONSE_P_H
#define QTAWS_GETNETWORKPROFILERESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetNetworkProfileResponse;

class GetNetworkProfileResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetNetworkProfileResponsePrivate(GetNetworkProfileResponse * const q);

    void parseGetNetworkProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkProfileResponse)
    Q_DISABLE_COPY(GetNetworkProfileResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
