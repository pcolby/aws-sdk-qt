// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEIDENTIFIERSRESPONSE_P_H
#define QTAWS_LISTDEVICEIDENTIFIERSRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class ListDeviceIdentifiersResponse;

class ListDeviceIdentifiersResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit ListDeviceIdentifiersResponsePrivate(ListDeviceIdentifiersResponse * const q);

    void parseListDeviceIdentifiersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeviceIdentifiersResponse)
    Q_DISABLE_COPY(ListDeviceIdentifiersResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
