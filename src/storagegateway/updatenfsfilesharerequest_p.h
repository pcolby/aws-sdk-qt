// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENFSFILESHAREREQUEST_P_H
#define QTAWS_UPDATENFSFILESHAREREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatenfsfilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateNFSFileShareRequest;

class UpdateNFSFileShareRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateNFSFileShareRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateNFSFileShareRequest * const q);
    UpdateNFSFileShareRequestPrivate(const UpdateNFSFileShareRequestPrivate &other,
                                   UpdateNFSFileShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNFSFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
