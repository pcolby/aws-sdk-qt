// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESHAREREQUEST_P_H
#define QTAWS_DELETEFILESHAREREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletefilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteFileShareRequest;

class DeleteFileShareRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteFileShareRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteFileShareRequest * const q);
    DeleteFileShareRequestPrivate(const DeleteFileShareRequestPrivate &other,
                                   DeleteFileShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
