// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYREQUEST_H
#define QTAWS_CREATEGATEWAYREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class CreateGatewayRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT CreateGatewayRequest : public BackupGatewayRequest {

public:
    CreateGatewayRequest(const CreateGatewayRequest &other);
    CreateGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGatewayRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
