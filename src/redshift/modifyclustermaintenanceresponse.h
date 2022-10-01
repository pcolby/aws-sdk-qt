// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERMAINTENANCERESPONSE_H
#define QTAWS_MODIFYCLUSTERMAINTENANCERESPONSE_H

#include "redshiftresponse.h"
#include "modifyclustermaintenancerequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterMaintenanceResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterMaintenanceResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterMaintenanceResponse(const ModifyClusterMaintenanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterMaintenanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterMaintenanceResponse)
    Q_DISABLE_COPY(ModifyClusterMaintenanceResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
