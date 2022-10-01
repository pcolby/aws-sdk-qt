// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRETRIEVALREQUEST_H
#define QTAWS_CANCELRETRIEVALREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CancelRetrievalRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CancelRetrievalRequest : public StorageGatewayRequest {

public:
    CancelRetrievalRequest(const CancelRetrievalRequest &other);
    CancelRetrievalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelRetrievalRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
