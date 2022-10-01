// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCESTARTTIMEREQUEST_H
#define QTAWS_UPDATEMAINTENANCESTARTTIMEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateMaintenanceStartTimeRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateMaintenanceStartTimeRequest : public StorageGatewayRequest {

public:
    UpdateMaintenanceStartTimeRequest(const UpdateMaintenanceStartTimeRequest &other);
    UpdateMaintenanceStartTimeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMaintenanceStartTimeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
