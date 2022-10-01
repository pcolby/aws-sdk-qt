// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILESYSTEMASSOCIATIONREQUEST_H
#define QTAWS_UPDATEFILESYSTEMASSOCIATIONREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateFileSystemAssociationRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateFileSystemAssociationRequest : public StorageGatewayRequest {

public:
    UpdateFileSystemAssociationRequest(const UpdateFileSystemAssociationRequest &other);
    UpdateFileSystemAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFileSystemAssociationRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
