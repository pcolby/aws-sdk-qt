// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEGATEWAYTOSERVERRESPONSE_H
#define QTAWS_ASSOCIATEGATEWAYTOSERVERRESPONSE_H

#include "backupgatewayresponse.h"
#include "associategatewaytoserverrequest.h"

namespace QtAws {
namespace BackupGateway {

class AssociateGatewayToServerResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT AssociateGatewayToServerResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    AssociateGatewayToServerResponse(const AssociateGatewayToServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateGatewayToServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateGatewayToServerResponse)
    Q_DISABLE_COPY(AssociateGatewayToServerResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
