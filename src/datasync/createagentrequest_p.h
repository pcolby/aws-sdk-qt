// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGENTREQUEST_P_H
#define QTAWS_CREATEAGENTREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createagentrequest.h"

namespace QtAws {
namespace DataSync {

class CreateAgentRequest;

class CreateAgentRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateAgentRequestPrivate(const DataSyncRequest::Action action,
                                   CreateAgentRequest * const q);
    CreateAgentRequestPrivate(const CreateAgentRequestPrivate &other,
                                   CreateAgentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAgentRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
