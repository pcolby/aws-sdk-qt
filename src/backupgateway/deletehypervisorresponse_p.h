// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHYPERVISORRESPONSE_P_H
#define QTAWS_DELETEHYPERVISORRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class DeleteHypervisorResponse;

class DeleteHypervisorResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit DeleteHypervisorResponsePrivate(DeleteHypervisorResponse * const q);

    void parseDeleteHypervisorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHypervisorResponse)
    Q_DISABLE_COPY(DeleteHypervisorResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
