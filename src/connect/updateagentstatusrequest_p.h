// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGENTSTATUSREQUEST_P_H
#define QTAWS_UPDATEAGENTSTATUSREQUEST_P_H

#include "connectrequest_p.h"
#include "updateagentstatusrequest.h"

namespace QtAws {
namespace Connect {

class UpdateAgentStatusRequest;

class UpdateAgentStatusRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateAgentStatusRequestPrivate(const ConnectRequest::Action action,
                                   UpdateAgentStatusRequest * const q);
    UpdateAgentStatusRequestPrivate(const UpdateAgentStatusRequestPrivate &other,
                                   UpdateAgentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAgentStatusRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
