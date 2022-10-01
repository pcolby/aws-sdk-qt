// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTRECOVERYINSTANCEREQUEST_P_H
#define QTAWS_DISCONNECTRECOVERYINSTANCEREQUEST_P_H

#include "drsrequest_p.h"
#include "disconnectrecoveryinstancerequest.h"

namespace QtAws {
namespace Drs {

class DisconnectRecoveryInstanceRequest;

class DisconnectRecoveryInstanceRequestPrivate : public DrsRequestPrivate {

public:
    DisconnectRecoveryInstanceRequestPrivate(const DrsRequest::Action action,
                                   DisconnectRecoveryInstanceRequest * const q);
    DisconnectRecoveryInstanceRequestPrivate(const DisconnectRecoveryInstanceRequestPrivate &other,
                                   DisconnectRecoveryInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisconnectRecoveryInstanceRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
