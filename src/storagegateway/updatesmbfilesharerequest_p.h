// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBFILESHAREREQUEST_P_H
#define QTAWS_UPDATESMBFILESHAREREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatesmbfilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBFileShareRequest;

class UpdateSMBFileShareRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateSMBFileShareRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateSMBFileShareRequest * const q);
    UpdateSMBFileShareRequestPrivate(const UpdateSMBFileShareRequestPrivate &other,
                                   UpdateSMBFileShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSMBFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
