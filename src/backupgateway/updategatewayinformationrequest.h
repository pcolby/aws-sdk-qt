// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYINFORMATIONREQUEST_H
#define QTAWS_UPDATEGATEWAYINFORMATIONREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class UpdateGatewayInformationRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT UpdateGatewayInformationRequest : public BackupGatewayRequest {

public:
    UpdateGatewayInformationRequest(const UpdateGatewayInformationRequest &other);
    UpdateGatewayInformationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayInformationRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
