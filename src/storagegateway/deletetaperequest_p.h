// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEREQUEST_P_H
#define QTAWS_DELETETAPEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletetaperequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapeRequest;

class DeleteTapeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteTapeRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteTapeRequest * const q);
    DeleteTapeRequestPrivate(const DeleteTapeRequestPrivate &other,
                                   DeleteTapeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTapeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
