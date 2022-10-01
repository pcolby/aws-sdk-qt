// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTMITIGATIONACTIONSTASKSREQUEST_P_H
#define QTAWS_LISTDETECTMITIGATIONACTIONSTASKSREQUEST_P_H

#include "iotrequest_p.h"
#include "listdetectmitigationactionstasksrequest.h"

namespace QtAws {
namespace IoT {

class ListDetectMitigationActionsTasksRequest;

class ListDetectMitigationActionsTasksRequestPrivate : public IoTRequestPrivate {

public:
    ListDetectMitigationActionsTasksRequestPrivate(const IoTRequest::Action action,
                                   ListDetectMitigationActionsTasksRequest * const q);
    ListDetectMitigationActionsTasksRequestPrivate(const ListDetectMitigationActionsTasksRequestPrivate &other,
                                   ListDetectMitigationActionsTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDetectMitigationActionsTasksRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
