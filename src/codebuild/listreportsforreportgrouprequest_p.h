// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTSFORREPORTGROUPREQUEST_P_H
#define QTAWS_LISTREPORTSFORREPORTGROUPREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listreportsforreportgrouprequest.h"

namespace QtAws {
namespace CodeBuild {

class ListReportsForReportGroupRequest;

class ListReportsForReportGroupRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListReportsForReportGroupRequestPrivate(const CodeBuildRequest::Action action,
                                   ListReportsForReportGroupRequest * const q);
    ListReportsForReportGroupRequestPrivate(const ListReportsForReportGroupRequestPrivate &other,
                                   ListReportsForReportGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReportsForReportGroupRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
