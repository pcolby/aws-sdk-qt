// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTASKEXECUTIONREQUEST_P_H
#define QTAWS_CANCELTASKEXECUTIONREQUEST_P_H

#include "datasyncrequest_p.h"
#include "canceltaskexecutionrequest.h"

namespace QtAws {
namespace DataSync {

class CancelTaskExecutionRequest;

class CancelTaskExecutionRequestPrivate : public DataSyncRequestPrivate {

public:
    CancelTaskExecutionRequestPrivate(const DataSyncRequest::Action action,
                                   CancelTaskExecutionRequest * const q);
    CancelTaskExecutionRequestPrivate(const CancelTaskExecutionRequestPrivate &other,
                                   CancelTaskExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelTaskExecutionRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
