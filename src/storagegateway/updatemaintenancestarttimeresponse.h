// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCESTARTTIMERESPONSE_H
#define QTAWS_UPDATEMAINTENANCESTARTTIMERESPONSE_H

#include "storagegatewayresponse.h"
#include "updatemaintenancestarttimerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateMaintenanceStartTimeResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateMaintenanceStartTimeResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateMaintenanceStartTimeResponse(const UpdateMaintenanceStartTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMaintenanceStartTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMaintenanceStartTimeResponse)
    Q_DISABLE_COPY(UpdateMaintenanceStartTimeResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
