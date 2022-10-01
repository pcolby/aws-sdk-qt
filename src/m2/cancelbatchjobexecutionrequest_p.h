// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHJOBEXECUTIONREQUEST_P_H
#define QTAWS_CANCELBATCHJOBEXECUTIONREQUEST_P_H

#include "m2request_p.h"
#include "cancelbatchjobexecutionrequest.h"

namespace QtAws {
namespace M2 {

class CancelBatchJobExecutionRequest;

class CancelBatchJobExecutionRequestPrivate : public M2RequestPrivate {

public:
    CancelBatchJobExecutionRequestPrivate(const M2Request::Action action,
                                   CancelBatchJobExecutionRequest * const q);
    CancelBatchJobExecutionRequestPrivate(const CancelBatchJobExecutionRequestPrivate &other,
                                   CancelBatchJobExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelBatchJobExecutionRequest)

};

} // namespace M2
} // namespace QtAws

#endif
