// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESECURITYKEYREQUEST_P_H
#define QTAWS_ASSOCIATESECURITYKEYREQUEST_P_H

#include "connectrequest_p.h"
#include "associatesecuritykeyrequest.h"

namespace QtAws {
namespace Connect {

class AssociateSecurityKeyRequest;

class AssociateSecurityKeyRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateSecurityKeyRequestPrivate(const ConnectRequest::Action action,
                                   AssociateSecurityKeyRequest * const q);
    AssociateSecurityKeyRequestPrivate(const AssociateSecurityKeyRequestPrivate &other,
                                   AssociateSecurityKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateSecurityKeyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
