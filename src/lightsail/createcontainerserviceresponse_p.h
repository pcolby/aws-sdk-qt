// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICERESPONSE_P_H
#define QTAWS_CREATECONTAINERSERVICERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceResponse;

class CreateContainerServiceResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateContainerServiceResponsePrivate(CreateContainerServiceResponse * const q);

    void parseCreateContainerServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContainerServiceResponse)
    Q_DISABLE_COPY(CreateContainerServiceResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
