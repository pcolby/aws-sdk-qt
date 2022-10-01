// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECLIENTAUTHENTICATIONREQUEST_P_H
#define QTAWS_ENABLECLIENTAUTHENTICATIONREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "enableclientauthenticationrequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableClientAuthenticationRequest;

class EnableClientAuthenticationRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    EnableClientAuthenticationRequestPrivate(const DirectoryServiceRequest::Action action,
                                   EnableClientAuthenticationRequest * const q);
    EnableClientAuthenticationRequestPrivate(const EnableClientAuthenticationRequestPrivate &other,
                                   EnableClientAuthenticationRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableClientAuthenticationRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
