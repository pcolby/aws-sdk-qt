// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYRESPONSE_H
#define QTAWS_CREATEGATEWAYRESPONSE_H

#include "backupgatewayresponse.h"
#include "creategatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class CreateGatewayResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT CreateGatewayResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    CreateGatewayResponse(const CreateGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGatewayResponse)
    Q_DISABLE_COPY(CreateGatewayResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
