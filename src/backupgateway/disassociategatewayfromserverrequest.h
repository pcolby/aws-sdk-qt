// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEGATEWAYFROMSERVERREQUEST_H
#define QTAWS_DISASSOCIATEGATEWAYFROMSERVERREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class DisassociateGatewayFromServerRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT DisassociateGatewayFromServerRequest : public BackupGatewayRequest {

public:
    DisassociateGatewayFromServerRequest(const DisassociateGatewayFromServerRequest &other);
    DisassociateGatewayFromServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateGatewayFromServerRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
