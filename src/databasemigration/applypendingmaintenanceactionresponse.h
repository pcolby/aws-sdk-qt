// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYPENDINGMAINTENANCEACTIONRESPONSE_H
#define QTAWS_APPLYPENDINGMAINTENANCEACTIONRESPONSE_H

#include "databasemigrationresponse.h"
#include "applypendingmaintenanceactionrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ApplyPendingMaintenanceActionResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT ApplyPendingMaintenanceActionResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    ApplyPendingMaintenanceActionResponse(const ApplyPendingMaintenanceActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ApplyPendingMaintenanceActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplyPendingMaintenanceActionResponse)
    Q_DISABLE_COPY(ApplyPendingMaintenanceActionResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
