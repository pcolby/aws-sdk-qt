// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSE_P_H
#define QTAWS_GETGATEWAYRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class GetGatewayResponse;

class GetGatewayResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit GetGatewayResponsePrivate(GetGatewayResponse * const q);

    void parseGetGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGatewayResponse)
    Q_DISABLE_COPY(GetGatewayResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
