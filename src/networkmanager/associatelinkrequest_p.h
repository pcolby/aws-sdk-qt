// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELINKREQUEST_P_H
#define QTAWS_ASSOCIATELINKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "associatelinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateLinkRequest;

class AssociateLinkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    AssociateLinkRequestPrivate(const NetworkManagerRequest::Action action,
                                   AssociateLinkRequest * const q);
    AssociateLinkRequestPrivate(const AssociateLinkRequestPrivate &other,
                                   AssociateLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
