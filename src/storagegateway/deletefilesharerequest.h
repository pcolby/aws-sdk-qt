// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESHAREREQUEST_H
#define QTAWS_DELETEFILESHAREREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteFileShareRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteFileShareRequest : public StorageGatewayRequest {

public:
    DeleteFileShareRequest(const DeleteFileShareRequest &other);
    DeleteFileShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
