// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRETRIEVALREQUEST_P_H
#define QTAWS_CANCELRETRIEVALREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "cancelretrievalrequest.h"

namespace QtAws {
namespace StorageGateway {

class CancelRetrievalRequest;

class CancelRetrievalRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CancelRetrievalRequestPrivate(const StorageGatewayRequest::Action action,
                                   CancelRetrievalRequest * const q);
    CancelRetrievalRequestPrivate(const CancelRetrievalRequestPrivate &other,
                                   CancelRetrievalRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelRetrievalRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
