// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H
#define QTAWS_ACCEPTENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H

#include "protonrequest_p.h"
#include "acceptenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class AcceptEnvironmentAccountConnectionRequest;

class AcceptEnvironmentAccountConnectionRequestPrivate : public ProtonRequestPrivate {

public:
    AcceptEnvironmentAccountConnectionRequestPrivate(const ProtonRequest::Action action,
                                   AcceptEnvironmentAccountConnectionRequest * const q);
    AcceptEnvironmentAccountConnectionRequestPrivate(const AcceptEnvironmentAccountConnectionRequestPrivate &other,
                                   AcceptEnvironmentAccountConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
