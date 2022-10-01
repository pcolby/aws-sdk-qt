// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEREGISTRYLOGINRESPONSE_P_H
#define QTAWS_CREATECONTAINERSERVICEREGISTRYLOGINRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceRegistryLoginResponse;

class CreateContainerServiceRegistryLoginResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateContainerServiceRegistryLoginResponsePrivate(CreateContainerServiceRegistryLoginResponse * const q);

    void parseCreateContainerServiceRegistryLoginResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContainerServiceRegistryLoginResponse)
    Q_DISABLE_COPY(CreateContainerServiceRegistryLoginResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
