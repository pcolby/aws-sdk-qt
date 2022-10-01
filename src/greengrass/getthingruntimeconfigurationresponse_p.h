// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHINGRUNTIMECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETTHINGRUNTIMECONFIGURATIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetThingRuntimeConfigurationResponse;

class GetThingRuntimeConfigurationResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetThingRuntimeConfigurationResponsePrivate(GetThingRuntimeConfigurationResponse * const q);

    void parseGetThingRuntimeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetThingRuntimeConfigurationResponse)
    Q_DISABLE_COPY(GetThingRuntimeConfigurationResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
