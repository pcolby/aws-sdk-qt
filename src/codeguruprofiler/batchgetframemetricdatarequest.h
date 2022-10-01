// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETFRAMEMETRICDATAREQUEST_H
#define QTAWS_BATCHGETFRAMEMETRICDATAREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class BatchGetFrameMetricDataRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT BatchGetFrameMetricDataRequest : public CodeGuruProfilerRequest {

public:
    BatchGetFrameMetricDataRequest(const BatchGetFrameMetricDataRequest &other);
    BatchGetFrameMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetFrameMetricDataRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
