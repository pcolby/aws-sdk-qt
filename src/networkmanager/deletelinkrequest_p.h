// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELINKREQUEST_P_H
#define QTAWS_DELETELINKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deletelinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteLinkRequest;

class DeleteLinkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeleteLinkRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeleteLinkRequest * const q);
    DeleteLinkRequestPrivate(const DeleteLinkRequestPrivate &other,
                                   DeleteLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
