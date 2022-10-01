// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEPOWERSRESPONSE_P_H
#define QTAWS_GETCONTAINERSERVICEPOWERSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServicePowersResponse;

class GetContainerServicePowersResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetContainerServicePowersResponsePrivate(GetContainerServicePowersResponse * const q);

    void parseGetContainerServicePowersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerServicePowersResponse)
    Q_DISABLE_COPY(GetContainerServicePowersResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
