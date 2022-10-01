// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHYPERVISORRESPONSE_P_H
#define QTAWS_UPDATEHYPERVISORRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class UpdateHypervisorResponse;

class UpdateHypervisorResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit UpdateHypervisorResponsePrivate(UpdateHypervisorResponse * const q);

    void parseUpdateHypervisorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateHypervisorResponse)
    Q_DISABLE_COPY(UpdateHypervisorResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
