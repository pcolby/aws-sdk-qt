// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYINFORMATIONRESPONSE_P_H
#define QTAWS_UPDATEGATEWAYINFORMATIONRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class UpdateGatewayInformationResponse;

class UpdateGatewayInformationResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit UpdateGatewayInformationResponsePrivate(UpdateGatewayInformationResponse * const q);

    void parseUpdateGatewayInformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayInformationResponse)
    Q_DISABLE_COPY(UpdateGatewayInformationResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
