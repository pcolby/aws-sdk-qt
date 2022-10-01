// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBFILESHAREVISIBILITYREQUEST_P_H
#define QTAWS_UPDATESMBFILESHAREVISIBILITYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatesmbfilesharevisibilityrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBFileShareVisibilityRequest;

class UpdateSMBFileShareVisibilityRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateSMBFileShareVisibilityRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateSMBFileShareVisibilityRequest * const q);
    UpdateSMBFileShareVisibilityRequestPrivate(const UpdateSMBFileShareVisibilityRequestPrivate &other,
                                   UpdateSMBFileShareVisibilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSMBFileShareVisibilityRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
