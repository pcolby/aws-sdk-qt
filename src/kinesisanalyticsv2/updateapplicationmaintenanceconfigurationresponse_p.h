// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONMAINTENANCECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEAPPLICATIONMAINTENANCECONFIGURATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class UpdateApplicationMaintenanceConfigurationResponse;

class UpdateApplicationMaintenanceConfigurationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit UpdateApplicationMaintenanceConfigurationResponsePrivate(UpdateApplicationMaintenanceConfigurationResponse * const q);

    void parseUpdateApplicationMaintenanceConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationMaintenanceConfigurationResponse)
    Q_DISABLE_COPY(UpdateApplicationMaintenanceConfigurationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
