// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROFILINGGROUPREQUEST_H
#define QTAWS_DESCRIBEPROFILINGGROUPREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class DescribeProfilingGroupRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT DescribeProfilingGroupRequest : public CodeGuruProfilerRequest {

public:
    DescribeProfilingGroupRequest(const DescribeProfilingGroupRequest &other);
    DescribeProfilingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProfilingGroupRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
