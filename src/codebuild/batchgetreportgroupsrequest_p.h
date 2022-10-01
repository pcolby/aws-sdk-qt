// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPORTGROUPSREQUEST_P_H
#define QTAWS_BATCHGETREPORTGROUPSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "batchgetreportgroupsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetReportGroupsRequest;

class BatchGetReportGroupsRequestPrivate : public CodeBuildRequestPrivate {

public:
    BatchGetReportGroupsRequestPrivate(const CodeBuildRequest::Action action,
                                   BatchGetReportGroupsRequest * const q);
    BatchGetReportGroupsRequestPrivate(const BatchGetReportGroupsRequestPrivate &other,
                                   BatchGetReportGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetReportGroupsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
