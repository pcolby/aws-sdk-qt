// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFILESYSTEMREQUEST_H
#define QTAWS_ASSOCIATEFILESYSTEMREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class AssociateFileSystemRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AssociateFileSystemRequest : public StorageGatewayRequest {

public:
    AssociateFileSystemRequest(const AssociateFileSystemRequest &other);
    AssociateFileSystemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFileSystemRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
