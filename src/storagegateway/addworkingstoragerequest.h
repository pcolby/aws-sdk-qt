// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDWORKINGSTORAGEREQUEST_H
#define QTAWS_ADDWORKINGSTORAGEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class AddWorkingStorageRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AddWorkingStorageRequest : public StorageGatewayRequest {

public:
    AddWorkingStorageRequest(const AddWorkingStorageRequest &other);
    AddWorkingStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddWorkingStorageRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
