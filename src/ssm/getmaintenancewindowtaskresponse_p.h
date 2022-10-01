// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWTASKRESPONSE_P_H
#define QTAWS_GETMAINTENANCEWINDOWTASKRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowTaskResponse;

class GetMaintenanceWindowTaskResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetMaintenanceWindowTaskResponsePrivate(GetMaintenanceWindowTaskResponse * const q);

    void parseGetMaintenanceWindowTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowTaskResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowTaskResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
