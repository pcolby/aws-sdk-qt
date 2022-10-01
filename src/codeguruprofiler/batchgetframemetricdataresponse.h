// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETFRAMEMETRICDATARESPONSE_H
#define QTAWS_BATCHGETFRAMEMETRICDATARESPONSE_H

#include "codeguruprofilerresponse.h"
#include "batchgetframemetricdatarequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class BatchGetFrameMetricDataResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT BatchGetFrameMetricDataResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    BatchGetFrameMetricDataResponse(const BatchGetFrameMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetFrameMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetFrameMetricDataResponse)
    Q_DISABLE_COPY(BatchGetFrameMetricDataResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
