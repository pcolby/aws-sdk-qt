// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSE_H
#define QTAWS_GETGATEWAYRESPONSE_H

#include "backupgatewayresponse.h"
#include "getgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class GetGatewayResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT GetGatewayResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    GetGatewayResponse(const GetGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGatewayResponse)
    Q_DISABLE_COPY(GetGatewayResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
