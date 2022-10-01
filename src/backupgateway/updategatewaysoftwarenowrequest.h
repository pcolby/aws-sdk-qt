// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYSOFTWARENOWREQUEST_H
#define QTAWS_UPDATEGATEWAYSOFTWARENOWREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class UpdateGatewaySoftwareNowRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT UpdateGatewaySoftwareNowRequest : public BackupGatewayRequest {

public:
    UpdateGatewaySoftwareNowRequest(const UpdateGatewaySoftwareNowRequest &other);
    UpdateGatewaySoftwareNowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewaySoftwareNowRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
