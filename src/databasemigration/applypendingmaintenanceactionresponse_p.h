// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYPENDINGMAINTENANCEACTIONRESPONSE_P_H
#define QTAWS_APPLYPENDINGMAINTENANCEACTIONRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class ApplyPendingMaintenanceActionResponse;

class ApplyPendingMaintenanceActionResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit ApplyPendingMaintenanceActionResponsePrivate(ApplyPendingMaintenanceActionResponse * const q);

    void parseApplyPendingMaintenanceActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplyPendingMaintenanceActionResponse)
    Q_DISABLE_COPY(ApplyPendingMaintenanceActionResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
