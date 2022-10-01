// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETFRAMEMETRICDATAREQUEST_P_H
#define QTAWS_BATCHGETFRAMEMETRICDATAREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "batchgetframemetricdatarequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class BatchGetFrameMetricDataRequest;

class BatchGetFrameMetricDataRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    BatchGetFrameMetricDataRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   BatchGetFrameMetricDataRequest * const q);
    BatchGetFrameMetricDataRequestPrivate(const BatchGetFrameMetricDataRequestPrivate &other,
                                   BatchGetFrameMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetFrameMetricDataRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
