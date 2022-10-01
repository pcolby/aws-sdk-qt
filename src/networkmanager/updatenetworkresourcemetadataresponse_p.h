// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKRESOURCEMETADATARESPONSE_P_H
#define QTAWS_UPDATENETWORKRESOURCEMETADATARESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class UpdateNetworkResourceMetadataResponse;

class UpdateNetworkResourceMetadataResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit UpdateNetworkResourceMetadataResponsePrivate(UpdateNetworkResourceMetadataResponse * const q);

    void parseUpdateNetworkResourceMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkResourceMetadataResponse)
    Q_DISABLE_COPY(UpdateNetworkResourceMetadataResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
