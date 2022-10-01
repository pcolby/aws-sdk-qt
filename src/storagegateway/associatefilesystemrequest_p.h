// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFILESYSTEMREQUEST_P_H
#define QTAWS_ASSOCIATEFILESYSTEMREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "associatefilesystemrequest.h"

namespace QtAws {
namespace StorageGateway {

class AssociateFileSystemRequest;

class AssociateFileSystemRequestPrivate : public StorageGatewayRequestPrivate {

public:
    AssociateFileSystemRequestPrivate(const StorageGatewayRequest::Action action,
                                   AssociateFileSystemRequest * const q);
    AssociateFileSystemRequestPrivate(const AssociateFileSystemRequestPrivate &other,
                                   AssociateFileSystemRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateFileSystemRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
