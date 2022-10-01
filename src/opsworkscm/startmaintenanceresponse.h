// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMAINTENANCERESPONSE_H
#define QTAWS_STARTMAINTENANCERESPONSE_H

#include "opsworkscmresponse.h"
#include "startmaintenancerequest.h"

namespace QtAws {
namespace OpsWorksCm {

class StartMaintenanceResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT StartMaintenanceResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    StartMaintenanceResponse(const StartMaintenanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMaintenanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMaintenanceResponse)
    Q_DISABLE_COPY(StartMaintenanceResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
