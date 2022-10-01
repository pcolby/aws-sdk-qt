// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGRUNTIMECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATETHINGRUNTIMECONFIGURATIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateThingRuntimeConfigurationResponse;

class UpdateThingRuntimeConfigurationResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateThingRuntimeConfigurationResponsePrivate(UpdateThingRuntimeConfigurationResponse * const q);

    void parseUpdateThingRuntimeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThingRuntimeConfigurationResponse)
    Q_DISABLE_COPY(UpdateThingRuntimeConfigurationResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
