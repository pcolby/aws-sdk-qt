// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWTASKRESPONSE_P_H
#define QTAWS_UPDATEMAINTENANCEWINDOWTASKRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowTaskResponse;

class UpdateMaintenanceWindowTaskResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateMaintenanceWindowTaskResponsePrivate(UpdateMaintenanceWindowTaskResponse * const q);

    void parseUpdateMaintenanceWindowTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMaintenanceWindowTaskResponse)
    Q_DISABLE_COPY(UpdateMaintenanceWindowTaskResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
