// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKREQUEST_P_H
#define QTAWS_UPDATETASKREQUEST_P_H

#include "datasyncrequest_p.h"
#include "updatetaskrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateTaskRequest;

class UpdateTaskRequestPrivate : public DataSyncRequestPrivate {

public:
    UpdateTaskRequestPrivate(const DataSyncRequest::Action action,
                                   UpdateTaskRequest * const q);
    UpdateTaskRequestPrivate(const UpdateTaskRequestPrivate &other,
                                   UpdateTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTaskRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
