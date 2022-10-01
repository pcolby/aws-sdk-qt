// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITMITIGATIONACTIONSTASKSREQUEST_P_H
#define QTAWS_LISTAUDITMITIGATIONACTIONSTASKSREQUEST_P_H

#include "iotrequest_p.h"
#include "listauditmitigationactionstasksrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditMitigationActionsTasksRequest;

class ListAuditMitigationActionsTasksRequestPrivate : public IoTRequestPrivate {

public:
    ListAuditMitigationActionsTasksRequestPrivate(const IoTRequest::Action action,
                                   ListAuditMitigationActionsTasksRequest * const q);
    ListAuditMitigationActionsTasksRequestPrivate(const ListAuditMitigationActionsTasksRequestPrivate &other,
                                   ListAuditMitigationActionsTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAuditMitigationActionsTasksRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
