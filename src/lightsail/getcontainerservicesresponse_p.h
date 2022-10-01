// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICESRESPONSE_P_H
#define QTAWS_GETCONTAINERSERVICESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServicesResponse;

class GetContainerServicesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetContainerServicesResponsePrivate(GetContainerServicesResponse * const q);

    void parseGetContainerServicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerServicesResponse)
    Q_DISABLE_COPY(GetContainerServicesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
