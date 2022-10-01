// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H
#define QTAWS_UPDATEENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H

#include "protonrequest_p.h"
#include "updateenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentAccountConnectionRequest;

class UpdateEnvironmentAccountConnectionRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateEnvironmentAccountConnectionRequestPrivate(const ProtonRequest::Action action,
                                   UpdateEnvironmentAccountConnectionRequest * const q);
    UpdateEnvironmentAccountConnectionRequestPrivate(const UpdateEnvironmentAccountConnectionRequestPrivate &other,
                                   UpdateEnvironmentAccountConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
