// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYREQUEST_H
#define QTAWS_DELETEGATEWAYREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class DeleteGatewayRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT DeleteGatewayRequest : public BackupGatewayRequest {

public:
    DeleteGatewayRequest(const DeleteGatewayRequest &other);
    DeleteGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
