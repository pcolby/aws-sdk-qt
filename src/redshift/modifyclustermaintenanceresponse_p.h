// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERMAINTENANCERESPONSE_P_H
#define QTAWS_MODIFYCLUSTERMAINTENANCERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterMaintenanceResponse;

class ModifyClusterMaintenanceResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyClusterMaintenanceResponsePrivate(ModifyClusterMaintenanceResponse * const q);

    void parseModifyClusterMaintenanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClusterMaintenanceResponse)
    Q_DISABLE_COPY(ModifyClusterMaintenanceResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
