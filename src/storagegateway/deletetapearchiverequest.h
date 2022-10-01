// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEARCHIVEREQUEST_H
#define QTAWS_DELETETAPEARCHIVEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapeArchiveRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteTapeArchiveRequest : public StorageGatewayRequest {

public:
    DeleteTapeArchiveRequest(const DeleteTapeArchiveRequest &other);
    DeleteTapeArchiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTapeArchiveRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
