// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTGROUPREQUEST_P_H
#define QTAWS_DELETEREPORTGROUPREQUEST_P_H

#include "codebuildrequest_p.h"
#include "deletereportgrouprequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteReportGroupRequest;

class DeleteReportGroupRequestPrivate : public CodeBuildRequestPrivate {

public:
    DeleteReportGroupRequestPrivate(const CodeBuildRequest::Action action,
                                   DeleteReportGroupRequest * const q);
    DeleteReportGroupRequestPrivate(const DeleteReportGroupRequestPrivate &other,
                                   DeleteReportGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReportGroupRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
