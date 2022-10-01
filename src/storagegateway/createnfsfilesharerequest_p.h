// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENFSFILESHAREREQUEST_P_H
#define QTAWS_CREATENFSFILESHAREREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "createnfsfilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateNFSFileShareRequest;

class CreateNFSFileShareRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CreateNFSFileShareRequestPrivate(const StorageGatewayRequest::Action action,
                                   CreateNFSFileShareRequest * const q);
    CreateNFSFileShareRequestPrivate(const CreateNFSFileShareRequestPrivate &other,
                                   CreateNFSFileShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNFSFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
