// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITTASKSREQUEST_P_H
#define QTAWS_LISTAUDITTASKSREQUEST_P_H

#include "iotrequest_p.h"
#include "listaudittasksrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditTasksRequest;

class ListAuditTasksRequestPrivate : public IoTRequestPrivate {

public:
    ListAuditTasksRequestPrivate(const IoTRequest::Action action,
                                   ListAuditTasksRequest * const q);
    ListAuditTasksRequestPrivate(const ListAuditTasksRequestPrivate &other,
                                   ListAuditTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAuditTasksRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
