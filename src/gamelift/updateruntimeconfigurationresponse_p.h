// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERUNTIMECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATERUNTIMECONFIGURATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateRuntimeConfigurationResponse;

class UpdateRuntimeConfigurationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateRuntimeConfigurationResponsePrivate(UpdateRuntimeConfigurationResponse * const q);

    void parseUpdateRuntimeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRuntimeConfigurationResponse)
    Q_DISABLE_COPY(UpdateRuntimeConfigurationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
