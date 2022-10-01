// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALMACHINESREQUEST_H
#define QTAWS_LISTVIRTUALMACHINESREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class ListVirtualMachinesRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT ListVirtualMachinesRequest : public BackupGatewayRequest {

public:
    ListVirtualMachinesRequest(const ListVirtualMachinesRequest &other);
    ListVirtualMachinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualMachinesRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
