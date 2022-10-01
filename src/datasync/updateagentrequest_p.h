// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGENTREQUEST_P_H
#define QTAWS_UPDATEAGENTREQUEST_P_H

#include "datasyncrequest_p.h"
#include "updateagentrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateAgentRequest;

class UpdateAgentRequestPrivate : public DataSyncRequestPrivate {

public:
    UpdateAgentRequestPrivate(const DataSyncRequest::Action action,
                                   UpdateAgentRequest * const q);
    UpdateAgentRequestPrivate(const UpdateAgentRequestPrivate &other,
                                   UpdateAgentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAgentRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
