// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEGATEWAYFROMSERVERRESPONSE_H
#define QTAWS_DISASSOCIATEGATEWAYFROMSERVERRESPONSE_H

#include "backupgatewayresponse.h"
#include "disassociategatewayfromserverrequest.h"

namespace QtAws {
namespace BackupGateway {

class DisassociateGatewayFromServerResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT DisassociateGatewayFromServerResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    DisassociateGatewayFromServerResponse(const DisassociateGatewayFromServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateGatewayFromServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateGatewayFromServerResponse)
    Q_DISABLE_COPY(DisassociateGatewayFromServerResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
