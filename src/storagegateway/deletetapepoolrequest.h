// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEPOOLREQUEST_H
#define QTAWS_DELETETAPEPOOLREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapePoolRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteTapePoolRequest : public StorageGatewayRequest {

public:
    DeleteTapePoolRequest(const DeleteTapePoolRequest &other);
    DeleteTapePoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTapePoolRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
