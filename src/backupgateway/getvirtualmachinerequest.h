// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVIRTUALMACHINEREQUEST_H
#define QTAWS_GETVIRTUALMACHINEREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class GetVirtualMachineRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT GetVirtualMachineRequest : public BackupGatewayRequest {

public:
    GetVirtualMachineRequest(const GetVirtualMachineRequest &other);
    GetVirtualMachineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVirtualMachineRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
