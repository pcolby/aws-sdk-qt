// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMAINTENANCESTARTTIMERESPONSE_H
#define QTAWS_PUTMAINTENANCESTARTTIMERESPONSE_H

#include "backupgatewayresponse.h"
#include "putmaintenancestarttimerequest.h"

namespace QtAws {
namespace BackupGateway {

class PutMaintenanceStartTimeResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT PutMaintenanceStartTimeResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    PutMaintenanceStartTimeResponse(const PutMaintenanceStartTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMaintenanceStartTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMaintenanceStartTimeResponse)
    Q_DISABLE_COPY(PutMaintenanceStartTimeResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
