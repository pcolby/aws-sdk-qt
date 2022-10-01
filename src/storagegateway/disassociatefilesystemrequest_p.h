// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFILESYSTEMREQUEST_P_H
#define QTAWS_DISASSOCIATEFILESYSTEMREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "disassociatefilesystemrequest.h"

namespace QtAws {
namespace StorageGateway {

class DisassociateFileSystemRequest;

class DisassociateFileSystemRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DisassociateFileSystemRequestPrivate(const StorageGatewayRequest::Action action,
                                   DisassociateFileSystemRequest * const q);
    DisassociateFileSystemRequestPrivate(const DisassociateFileSystemRequestPrivate &other,
                                   DisassociateFileSystemRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFileSystemRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
