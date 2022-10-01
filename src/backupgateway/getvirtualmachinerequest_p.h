// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVIRTUALMACHINEREQUEST_P_H
#define QTAWS_GETVIRTUALMACHINEREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "getvirtualmachinerequest.h"

namespace QtAws {
namespace BackupGateway {

class GetVirtualMachineRequest;

class GetVirtualMachineRequestPrivate : public BackupGatewayRequestPrivate {

public:
    GetVirtualMachineRequestPrivate(const BackupGatewayRequest::Action action,
                                   GetVirtualMachineRequest * const q);
    GetVirtualMachineRequestPrivate(const GetVirtualMachineRequestPrivate &other,
                                   GetVirtualMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVirtualMachineRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
