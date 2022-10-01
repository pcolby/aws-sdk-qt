// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATEDEVICEDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateDeviceDefinitionResponse;

class UpdateDeviceDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateDeviceDefinitionResponsePrivate(UpdateDeviceDefinitionResponse * const q);

    void parseUpdateDeviceDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceDefinitionResponse)
    Q_DISABLE_COPY(UpdateDeviceDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
