// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_DELETEMAINTENANCEWINDOWRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeleteMaintenanceWindowResponse;

class DeleteMaintenanceWindowResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeleteMaintenanceWindowResponsePrivate(DeleteMaintenanceWindowResponse * const q);

    void parseDeleteMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMaintenanceWindowResponse)
    Q_DISABLE_COPY(DeleteMaintenanceWindowResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
