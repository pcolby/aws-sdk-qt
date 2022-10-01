// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEDERATIONTOKENREQUEST_P_H
#define QTAWS_GETFEDERATIONTOKENREQUEST_P_H

#include "connectrequest_p.h"
#include "getfederationtokenrequest.h"

namespace QtAws {
namespace Connect {

class GetFederationTokenRequest;

class GetFederationTokenRequestPrivate : public ConnectRequestPrivate {

public:
    GetFederationTokenRequestPrivate(const ConnectRequest::Action action,
                                   GetFederationTokenRequest * const q);
    GetFederationTokenRequestPrivate(const GetFederationTokenRequestPrivate &other,
                                   GetFederationTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFederationTokenRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
