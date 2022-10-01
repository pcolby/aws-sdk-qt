// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMBFILESHAREREQUEST_P_H
#define QTAWS_CREATESMBFILESHAREREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "createsmbfilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateSMBFileShareRequest;

class CreateSMBFileShareRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CreateSMBFileShareRequestPrivate(const StorageGatewayRequest::Action action,
                                   CreateSMBFileShareRequest * const q);
    CreateSMBFileShareRequestPrivate(const CreateSMBFileShareRequestPrivate &other,
                                   CreateSMBFileShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSMBFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
