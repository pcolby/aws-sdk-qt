// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROFILINGGROUPRESPONSE_H
#define QTAWS_DESCRIBEPROFILINGGROUPRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "describeprofilinggrouprequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class DescribeProfilingGroupResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT DescribeProfilingGroupResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    DescribeProfilingGroupResponse(const DescribeProfilingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProfilingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProfilingGroupResponse)
    Q_DISABLE_COPY(DescribeProfilingGroupResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
