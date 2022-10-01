// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECLIENTAUTHENTICATIONREQUEST_P_H
#define QTAWS_DISABLECLIENTAUTHENTICATIONREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "disableclientauthenticationrequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableClientAuthenticationRequest;

class DisableClientAuthenticationRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DisableClientAuthenticationRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DisableClientAuthenticationRequest * const q);
    DisableClientAuthenticationRequestPrivate(const DisableClientAuthenticationRequestPrivate &other,
                                   DisableClientAuthenticationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableClientAuthenticationRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
