// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTGROUPREQUEST_P_H
#define QTAWS_UPDATEREPORTGROUPREQUEST_P_H

#include "codebuildrequest_p.h"
#include "updatereportgrouprequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateReportGroupRequest;

class UpdateReportGroupRequestPrivate : public CodeBuildRequestPrivate {

public:
    UpdateReportGroupRequestPrivate(const CodeBuildRequest::Action action,
                                   UpdateReportGroupRequest * const q);
    UpdateReportGroupRequestPrivate(const UpdateReportGroupRequestPrivate &other,
                                   UpdateReportGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReportGroupRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
