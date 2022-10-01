// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFILESYSTEMREQUEST_H
#define QTAWS_DISASSOCIATEFILESYSTEMREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DisassociateFileSystemRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DisassociateFileSystemRequest : public StorageGatewayRequest {

public:
    DisassociateFileSystemRequest(const DisassociateFileSystemRequest &other);
    DisassociateFileSystemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFileSystemRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
