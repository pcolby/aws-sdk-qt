// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGENTSTATUSREQUEST_P_H
#define QTAWS_CREATEAGENTSTATUSREQUEST_P_H

#include "connectrequest_p.h"
#include "createagentstatusrequest.h"

namespace QtAws {
namespace Connect {

class CreateAgentStatusRequest;

class CreateAgentStatusRequestPrivate : public ConnectRequestPrivate {

public:
    CreateAgentStatusRequestPrivate(const ConnectRequest::Action action,
                                   CreateAgentStatusRequest * const q);
    CreateAgentStatusRequestPrivate(const CreateAgentStatusRequestPrivate &other,
                                   CreateAgentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAgentStatusRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
