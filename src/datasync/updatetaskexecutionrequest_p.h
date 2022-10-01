// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKEXECUTIONREQUEST_P_H
#define QTAWS_UPDATETASKEXECUTIONREQUEST_P_H

#include "datasyncrequest_p.h"
#include "updatetaskexecutionrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateTaskExecutionRequest;

class UpdateTaskExecutionRequestPrivate : public DataSyncRequestPrivate {

public:
    UpdateTaskExecutionRequestPrivate(const DataSyncRequest::Action action,
                                   UpdateTaskExecutionRequest * const q);
    UpdateTaskExecutionRequestPrivate(const UpdateTaskExecutionRequestPrivate &other,
                                   UpdateTaskExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTaskExecutionRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
