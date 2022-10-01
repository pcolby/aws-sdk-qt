// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONMAINTENANCECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONMAINTENANCECONFIGURATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "updateapplicationmaintenanceconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class UpdateApplicationMaintenanceConfigurationRequest;

class UpdateApplicationMaintenanceConfigurationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    UpdateApplicationMaintenanceConfigurationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   UpdateApplicationMaintenanceConfigurationRequest * const q);
    UpdateApplicationMaintenanceConfigurationRequestPrivate(const UpdateApplicationMaintenanceConfigurationRequestPrivate &other,
                                   UpdateApplicationMaintenanceConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationMaintenanceConfigurationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
