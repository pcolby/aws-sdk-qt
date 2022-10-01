// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTHANDSHAKEREQUEST_P_H
#define QTAWS_ACCEPTHANDSHAKEREQUEST_P_H

#include "organizationsrequest_p.h"
#include "accepthandshakerequest.h"

namespace QtAws {
namespace Organizations {

class AcceptHandshakeRequest;

class AcceptHandshakeRequestPrivate : public OrganizationsRequestPrivate {

public:
    AcceptHandshakeRequestPrivate(const OrganizationsRequest::Action action,
                                   AcceptHandshakeRequest * const q);
    AcceptHandshakeRequestPrivate(const AcceptHandshakeRequestPrivate &other,
                                   AcceptHandshakeRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptHandshakeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
