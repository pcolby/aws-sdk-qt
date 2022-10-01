// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALMACHINESREQUEST_P_H
#define QTAWS_LISTVIRTUALMACHINESREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "listvirtualmachinesrequest.h"

namespace QtAws {
namespace BackupGateway {

class ListVirtualMachinesRequest;

class ListVirtualMachinesRequestPrivate : public BackupGatewayRequestPrivate {

public:
    ListVirtualMachinesRequestPrivate(const BackupGatewayRequest::Action action,
                                   ListVirtualMachinesRequest * const q);
    ListVirtualMachinesRequestPrivate(const ListVirtualMachinesRequestPrivate &other,
                                   ListVirtualMachinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVirtualMachinesRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
