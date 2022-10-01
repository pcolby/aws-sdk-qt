// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESECURITYKEYREQUEST_P_H
#define QTAWS_DISASSOCIATESECURITYKEYREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociatesecuritykeyrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateSecurityKeyRequest;

class DisassociateSecurityKeyRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociateSecurityKeyRequestPrivate(const ConnectRequest::Action action,
                                   DisassociateSecurityKeyRequest * const q);
    DisassociateSecurityKeyRequestPrivate(const DisassociateSecurityKeyRequestPrivate &other,
                                   DisassociateSecurityKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateSecurityKeyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
