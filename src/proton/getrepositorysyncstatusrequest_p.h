// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYSYNCSTATUSREQUEST_P_H
#define QTAWS_GETREPOSITORYSYNCSTATUSREQUEST_P_H

#include "protonrequest_p.h"
#include "getrepositorysyncstatusrequest.h"

namespace QtAws {
namespace Proton {

class GetRepositorySyncStatusRequest;

class GetRepositorySyncStatusRequestPrivate : public ProtonRequestPrivate {

public:
    GetRepositorySyncStatusRequestPrivate(const ProtonRequest::Action action,
                                   GetRepositorySyncStatusRequest * const q);
    GetRepositorySyncStatusRequestPrivate(const GetRepositorySyncStatusRequestPrivate &other,
                                   GetRepositorySyncStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRepositorySyncStatusRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
