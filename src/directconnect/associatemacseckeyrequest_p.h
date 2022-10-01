// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMACSECKEYREQUEST_P_H
#define QTAWS_ASSOCIATEMACSECKEYREQUEST_P_H

#include "directconnectrequest_p.h"
#include "associatemacseckeyrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateMacSecKeyRequest;

class AssociateMacSecKeyRequestPrivate : public DirectConnectRequestPrivate {

public:
    AssociateMacSecKeyRequestPrivate(const DirectConnectRequest::Action action,
                                   AssociateMacSecKeyRequest * const q);
    AssociateMacSecKeyRequestPrivate(const AssociateMacSecKeyRequestPrivate &other,
                                   AssociateMacSecKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateMacSecKeyRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
