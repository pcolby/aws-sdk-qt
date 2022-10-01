// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTACCOUNTCONNECTIONREQUEST_P_H

#include "protonrequest_p.h"
#include "deleteenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentAccountConnectionRequest;

class DeleteEnvironmentAccountConnectionRequestPrivate : public ProtonRequestPrivate {

public:
    DeleteEnvironmentAccountConnectionRequestPrivate(const ProtonRequest::Action action,
                                   DeleteEnvironmentAccountConnectionRequest * const q);
    DeleteEnvironmentAccountConnectionRequestPrivate(const DeleteEnvironmentAccountConnectionRequestPrivate &other,
                                   DeleteEnvironmentAccountConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
