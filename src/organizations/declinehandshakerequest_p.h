// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEHANDSHAKEREQUEST_P_H
#define QTAWS_DECLINEHANDSHAKEREQUEST_P_H

#include "organizationsrequest_p.h"
#include "declinehandshakerequest.h"

namespace QtAws {
namespace Organizations {

class DeclineHandshakeRequest;

class DeclineHandshakeRequestPrivate : public OrganizationsRequestPrivate {

public:
    DeclineHandshakeRequestPrivate(const OrganizationsRequest::Action action,
                                   DeclineHandshakeRequest * const q);
    DeclineHandshakeRequestPrivate(const DeclineHandshakeRequestPrivate &other,
                                   DeclineHandshakeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeclineHandshakeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
