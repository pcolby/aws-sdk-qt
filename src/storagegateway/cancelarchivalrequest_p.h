// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELARCHIVALREQUEST_P_H
#define QTAWS_CANCELARCHIVALREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "cancelarchivalrequest.h"

namespace QtAws {
namespace StorageGateway {

class CancelArchivalRequest;

class CancelArchivalRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CancelArchivalRequestPrivate(const StorageGatewayRequest::Action action,
                                   CancelArchivalRequest * const q);
    CancelArchivalRequestPrivate(const CancelArchivalRequestPrivate &other,
                                   CancelArchivalRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelArchivalRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
