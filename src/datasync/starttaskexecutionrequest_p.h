// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKEXECUTIONREQUEST_P_H
#define QTAWS_STARTTASKEXECUTIONREQUEST_P_H

#include "datasyncrequest_p.h"
#include "starttaskexecutionrequest.h"

namespace QtAws {
namespace DataSync {

class StartTaskExecutionRequest;

class StartTaskExecutionRequestPrivate : public DataSyncRequestPrivate {

public:
    StartTaskExecutionRequestPrivate(const DataSyncRequest::Action action,
                                   StartTaskExecutionRequest * const q);
    StartTaskExecutionRequestPrivate(const StartTaskExecutionRequestPrivate &other,
                                   StartTaskExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTaskExecutionRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
