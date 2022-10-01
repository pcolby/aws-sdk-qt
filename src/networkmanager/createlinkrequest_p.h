// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELINKREQUEST_P_H
#define QTAWS_CREATELINKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createlinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateLinkRequest;

class CreateLinkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateLinkRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateLinkRequest * const q);
    CreateLinkRequestPrivate(const CreateLinkRequestPrivate &other,
                                   CreateLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
