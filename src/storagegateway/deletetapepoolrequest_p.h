// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEPOOLREQUEST_P_H
#define QTAWS_DELETETAPEPOOLREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletetapepoolrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapePoolRequest;

class DeleteTapePoolRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteTapePoolRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteTapePoolRequest * const q);
    DeleteTapePoolRequestPrivate(const DeleteTapePoolRequestPrivate &other,
                                   DeleteTapePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTapePoolRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
