// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEREQUEST_H
#define QTAWS_DELETETAPEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapeRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteTapeRequest : public StorageGatewayRequest {

public:
    DeleteTapeRequest(const DeleteTapeRequest &other);
    DeleteTapeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTapeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
