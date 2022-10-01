// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONREQUEST_P_H
#define QTAWS_DELETECONNECTIONREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deleteconnectionrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteConnectionRequest;

class DeleteConnectionRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeleteConnectionRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeleteConnectionRequest * const q);
    DeleteConnectionRequestPrivate(const DeleteConnectionRequestPrivate &other,
                                   DeleteConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectionRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
