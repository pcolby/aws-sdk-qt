// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILESYSTEMASSOCIATIONREQUEST_P_H
#define QTAWS_UPDATEFILESYSTEMASSOCIATIONREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatefilesystemassociationrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateFileSystemAssociationRequest;

class UpdateFileSystemAssociationRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateFileSystemAssociationRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateFileSystemAssociationRequest * const q);
    UpdateFileSystemAssociationRequestPrivate(const UpdateFileSystemAssociationRequestPrivate &other,
                                   UpdateFileSystemAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFileSystemAssociationRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
