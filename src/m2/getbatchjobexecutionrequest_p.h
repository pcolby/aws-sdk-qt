// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHJOBEXECUTIONREQUEST_P_H
#define QTAWS_GETBATCHJOBEXECUTIONREQUEST_P_H

#include "m2request_p.h"
#include "getbatchjobexecutionrequest.h"

namespace QtAws {
namespace M2 {

class GetBatchJobExecutionRequest;

class GetBatchJobExecutionRequestPrivate : public M2RequestPrivate {

public:
    GetBatchJobExecutionRequestPrivate(const M2Request::Action action,
                                   GetBatchJobExecutionRequest * const q);
    GetBatchJobExecutionRequestPrivate(const GetBatchJobExecutionRequestPrivate &other,
                                   GetBatchJobExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBatchJobExecutionRequest)

};

} // namespace M2
} // namespace QtAws

#endif
