// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYRESPONSE_P_H
#define QTAWS_DELETEGATEWAYRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class DeleteGatewayResponse;

class DeleteGatewayResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit DeleteGatewayResponsePrivate(DeleteGatewayResponse * const q);

    void parseDeleteGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayResponse)
    Q_DISABLE_COPY(DeleteGatewayResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
