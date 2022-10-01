// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_GETMAINTENANCEWINDOWRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowResponse;

class GetMaintenanceWindowResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetMaintenanceWindowResponsePrivate(GetMaintenanceWindowResponse * const q);

    void parseGetMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
