// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELINKREQUEST_P_H
#define QTAWS_DISASSOCIATELINKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "disassociatelinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateLinkRequest;

class DisassociateLinkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DisassociateLinkRequestPrivate(const NetworkManagerRequest::Action action,
                                   DisassociateLinkRequest * const q);
    DisassociateLinkRequestPrivate(const DisassociateLinkRequestPrivate &other,
                                   DisassociateLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
