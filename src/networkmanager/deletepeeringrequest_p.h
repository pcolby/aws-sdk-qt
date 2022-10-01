// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPEERINGREQUEST_P_H
#define QTAWS_DELETEPEERINGREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deletepeeringrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeletePeeringRequest;

class DeletePeeringRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeletePeeringRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeletePeeringRequest * const q);
    DeletePeeringRequestPrivate(const DeletePeeringRequestPrivate &other,
                                   DeletePeeringRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePeeringRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
