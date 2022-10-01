// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDREPORTGROUPSREQUEST_P_H
#define QTAWS_LISTSHAREDREPORTGROUPSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listsharedreportgroupsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSharedReportGroupsRequest;

class ListSharedReportGroupsRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListSharedReportGroupsRequestPrivate(const CodeBuildRequest::Action action,
                                   ListSharedReportGroupsRequest * const q);
    ListSharedReportGroupsRequestPrivate(const ListSharedReportGroupsRequestPrivate &other,
                                   ListSharedReportGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSharedReportGroupsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
