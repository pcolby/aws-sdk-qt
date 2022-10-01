// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMACSECKEYREQUEST_P_H
#define QTAWS_DISASSOCIATEMACSECKEYREQUEST_P_H

#include "directconnectrequest_p.h"
#include "disassociatemacseckeyrequest.h"

namespace QtAws {
namespace DirectConnect {

class DisassociateMacSecKeyRequest;

class DisassociateMacSecKeyRequestPrivate : public DirectConnectRequestPrivate {

public:
    DisassociateMacSecKeyRequestPrivate(const DirectConnectRequest::Action action,
                                   DisassociateMacSecKeyRequest * const q);
    DisassociateMacSecKeyRequestPrivate(const DisassociateMacSecKeyRequestPrivate &other,
                                   DisassociateMacSecKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateMacSecKeyRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
