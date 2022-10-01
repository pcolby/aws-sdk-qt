// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELHANDSHAKEREQUEST_P_H
#define QTAWS_CANCELHANDSHAKEREQUEST_P_H

#include "organizationsrequest_p.h"
#include "cancelhandshakerequest.h"

namespace QtAws {
namespace Organizations {

class CancelHandshakeRequest;

class CancelHandshakeRequestPrivate : public OrganizationsRequestPrivate {

public:
    CancelHandshakeRequestPrivate(const OrganizationsRequest::Action action,
                                   CancelHandshakeRequest * const q);
    CancelHandshakeRequestPrivate(const CancelHandshakeRequestPrivate &other,
                                   CancelHandshakeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelHandshakeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
