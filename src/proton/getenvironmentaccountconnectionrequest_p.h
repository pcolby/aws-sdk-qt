// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H
#define QTAWS_GETENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H

#include "protonrequest_p.h"
#include "getenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentAccountConnectionRequest;

class GetEnvironmentAccountConnectionRequestPrivate : public ProtonRequestPrivate {

public:
    GetEnvironmentAccountConnectionRequestPrivate(const ProtonRequest::Action action,
                                   GetEnvironmentAccountConnectionRequest * const q);
    GetEnvironmentAccountConnectionRequestPrivate(const GetEnvironmentAccountConnectionRequestPrivate &other,
                                   GetEnvironmentAccountConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
