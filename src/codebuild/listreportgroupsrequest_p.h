// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTGROUPSREQUEST_P_H
#define QTAWS_LISTREPORTGROUPSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listreportgroupsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListReportGroupsRequest;

class ListReportGroupsRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListReportGroupsRequestPrivate(const CodeBuildRequest::Action action,
                                   ListReportGroupsRequest * const q);
    ListReportGroupsRequestPrivate(const ListReportGroupsRequestPrivate &other,
                                   ListReportGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReportGroupsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
