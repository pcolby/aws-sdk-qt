// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGENTREQUEST_P_H
#define QTAWS_DELETEAGENTREQUEST_P_H

#include "datasyncrequest_p.h"
#include "deleteagentrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteAgentRequest;

class DeleteAgentRequestPrivate : public DataSyncRequestPrivate {

public:
    DeleteAgentRequestPrivate(const DataSyncRequest::Action action,
                                   DeleteAgentRequest * const q);
    DeleteAgentRequestPrivate(const DeleteAgentRequestPrivate &other,
                                   DeleteAgentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAgentRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
