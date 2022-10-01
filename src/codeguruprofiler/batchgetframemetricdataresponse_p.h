// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETFRAMEMETRICDATARESPONSE_P_H
#define QTAWS_BATCHGETFRAMEMETRICDATARESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class BatchGetFrameMetricDataResponse;

class BatchGetFrameMetricDataResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit BatchGetFrameMetricDataResponsePrivate(BatchGetFrameMetricDataResponse * const q);

    void parseBatchGetFrameMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetFrameMetricDataResponse)
    Q_DISABLE_COPY(BatchGetFrameMetricDataResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
