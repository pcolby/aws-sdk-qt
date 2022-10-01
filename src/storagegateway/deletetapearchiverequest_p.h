// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEARCHIVEREQUEST_P_H
#define QTAWS_DELETETAPEARCHIVEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletetapearchiverequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapeArchiveRequest;

class DeleteTapeArchiveRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteTapeArchiveRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteTapeArchiveRequest * const q);
    DeleteTapeArchiveRequestPrivate(const DeleteTapeArchiveRequestPrivate &other,
                                   DeleteTapeArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTapeArchiveRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
