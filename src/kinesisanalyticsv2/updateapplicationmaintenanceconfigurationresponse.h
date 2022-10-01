// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONMAINTENANCECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEAPPLICATIONMAINTENANCECONFIGURATIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "updateapplicationmaintenanceconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class UpdateApplicationMaintenanceConfigurationResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT UpdateApplicationMaintenanceConfigurationResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    UpdateApplicationMaintenanceConfigurationResponse(const UpdateApplicationMaintenanceConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApplicationMaintenanceConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationMaintenanceConfigurationResponse)
    Q_DISABLE_COPY(UpdateApplicationMaintenanceConfigurationResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
