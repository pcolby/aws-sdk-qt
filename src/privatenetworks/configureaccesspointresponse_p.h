// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREACCESSPOINTRESPONSE_P_H
#define QTAWS_CONFIGUREACCESSPOINTRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class ConfigureAccessPointResponse;

class ConfigureAccessPointResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit ConfigureAccessPointResponsePrivate(ConfigureAccessPointResponse * const q);

    void parseConfigureAccessPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfigureAccessPointResponse)
    Q_DISABLE_COPY(ConfigureAccessPointResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
