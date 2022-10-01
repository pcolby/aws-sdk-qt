// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERSETTINGSRESPONSE_P_H
#define QTAWS_UPDATECLUSTERSETTINGSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class UpdateClusterSettingsResponse;

class UpdateClusterSettingsResponsePrivate : public EcsResponsePrivate {

public:

    explicit UpdateClusterSettingsResponsePrivate(UpdateClusterSettingsResponse * const q);

    void parseUpdateClusterSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClusterSettingsResponse)
    Q_DISABLE_COPY(UpdateClusterSettingsResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
