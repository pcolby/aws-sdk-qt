// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYSOFTWARENOWRESPONSE_H
#define QTAWS_UPDATEGATEWAYSOFTWARENOWRESPONSE_H

#include "backupgatewayresponse.h"
#include "updategatewaysoftwarenowrequest.h"

namespace QtAws {
namespace BackupGateway {

class UpdateGatewaySoftwareNowResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT UpdateGatewaySoftwareNowResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    UpdateGatewaySoftwareNowResponse(const UpdateGatewaySoftwareNowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGatewaySoftwareNowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewaySoftwareNowResponse)
    Q_DISABLE_COPY(UpdateGatewaySoftwareNowResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
