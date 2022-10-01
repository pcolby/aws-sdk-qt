// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEGATEWAYTOSERVERREQUEST_H
#define QTAWS_ASSOCIATEGATEWAYTOSERVERREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class AssociateGatewayToServerRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT AssociateGatewayToServerRequest : public BackupGatewayRequest {

public:
    AssociateGatewayToServerRequest(const AssociateGatewayToServerRequest &other);
    AssociateGatewayToServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateGatewayToServerRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
