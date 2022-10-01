// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVIRTUALMACHINERESPONSE_H
#define QTAWS_GETVIRTUALMACHINERESPONSE_H

#include "backupgatewayresponse.h"
#include "getvirtualmachinerequest.h"

namespace QtAws {
namespace BackupGateway {

class GetVirtualMachineResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT GetVirtualMachineResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    GetVirtualMachineResponse(const GetVirtualMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVirtualMachineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVirtualMachineResponse)
    Q_DISABLE_COPY(GetVirtualMachineResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
