// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKSREQUEST_P_H
#define QTAWS_LISTTASKSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "listtasksrequest.h"

namespace QtAws {
namespace DataSync {

class ListTasksRequest;

class ListTasksRequestPrivate : public DataSyncRequestPrivate {

public:
    ListTasksRequestPrivate(const DataSyncRequest::Action action,
                                   ListTasksRequest * const q);
    ListTasksRequestPrivate(const ListTasksRequestPrivate &other,
                                   ListTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTasksRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
