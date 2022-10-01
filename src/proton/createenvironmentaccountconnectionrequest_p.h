// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H
#define QTAWS_CREATEENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H

#include "protonrequest_p.h"
#include "createenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentAccountConnectionRequest;

class CreateEnvironmentAccountConnectionRequestPrivate : public ProtonRequestPrivate {

public:
    CreateEnvironmentAccountConnectionRequestPrivate(const ProtonRequest::Action action,
                                   CreateEnvironmentAccountConnectionRequest * const q);
    CreateEnvironmentAccountConnectionRequestPrivate(const CreateEnvironmentAccountConnectionRequestPrivate &other,
                                   CreateEnvironmentAccountConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
