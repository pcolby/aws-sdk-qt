// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELINKREQUEST_P_H
#define QTAWS_UPDATELINKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "updatelinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateLinkRequest;

class UpdateLinkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    UpdateLinkRequestPrivate(const NetworkManagerRequest::Action action,
                                   UpdateLinkRequest * const q);
    UpdateLinkRequestPrivate(const UpdateLinkRequestPrivate &other,
                                   UpdateLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
