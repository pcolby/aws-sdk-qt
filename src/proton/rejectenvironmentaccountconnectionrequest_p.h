// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H
#define QTAWS_REJECTENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H

#include "protonrequest_p.h"
#include "rejectenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class RejectEnvironmentAccountConnectionRequest;

class RejectEnvironmentAccountConnectionRequestPrivate : public ProtonRequestPrivate {

public:
    RejectEnvironmentAccountConnectionRequestPrivate(const ProtonRequest::Action action,
                                   RejectEnvironmentAccountConnectionRequest * const q);
    RejectEnvironmentAccountConnectionRequestPrivate(const RejectEnvironmentAccountConnectionRequestPrivate &other,
                                   RejectEnvironmentAccountConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
