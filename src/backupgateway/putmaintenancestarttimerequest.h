// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMAINTENANCESTARTTIMEREQUEST_H
#define QTAWS_PUTMAINTENANCESTARTTIMEREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class PutMaintenanceStartTimeRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT PutMaintenanceStartTimeRequest : public BackupGatewayRequest {

public:
    PutMaintenanceStartTimeRequest(const PutMaintenanceStartTimeRequest &other);
    PutMaintenanceStartTimeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMaintenanceStartTimeRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
