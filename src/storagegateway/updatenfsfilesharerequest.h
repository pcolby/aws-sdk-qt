// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENFSFILESHAREREQUEST_H
#define QTAWS_UPDATENFSFILESHAREREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateNFSFileShareRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateNFSFileShareRequest : public StorageGatewayRequest {

public:
    UpdateNFSFileShareRequest(const UpdateNFSFileShareRequest &other);
    UpdateNFSFileShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNFSFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
