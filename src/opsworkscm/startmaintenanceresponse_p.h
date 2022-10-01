// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMAINTENANCERESPONSE_P_H
#define QTAWS_STARTMAINTENANCERESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class StartMaintenanceResponse;

class StartMaintenanceResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit StartMaintenanceResponsePrivate(StartMaintenanceResponse * const q);

    void parseStartMaintenanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMaintenanceResponse)
    Q_DISABLE_COPY(StartMaintenanceResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
