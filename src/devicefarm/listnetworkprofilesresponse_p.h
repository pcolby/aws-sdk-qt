// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKPROFILESRESPONSE_P_H
#define QTAWS_LISTNETWORKPROFILESRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListNetworkProfilesResponse;

class ListNetworkProfilesResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListNetworkProfilesResponsePrivate(ListNetworkProfilesResponse * const q);

    void parseListNetworkProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNetworkProfilesResponse)
    Q_DISABLE_COPY(ListNetworkProfilesResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
