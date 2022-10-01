// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEDEPLOYMENTSRESPONSE_P_H
#define QTAWS_GETCONTAINERSERVICEDEPLOYMENTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServiceDeploymentsResponse;

class GetContainerServiceDeploymentsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetContainerServiceDeploymentsResponsePrivate(GetContainerServiceDeploymentsResponse * const q);

    void parseGetContainerServiceDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerServiceDeploymentsResponse)
    Q_DISABLE_COPY(GetContainerServiceDeploymentsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
