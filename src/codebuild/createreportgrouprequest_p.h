// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPORTGROUPREQUEST_P_H
#define QTAWS_CREATEREPORTGROUPREQUEST_P_H

#include "codebuildrequest_p.h"
#include "createreportgrouprequest.h"

namespace QtAws {
namespace CodeBuild {

class CreateReportGroupRequest;

class CreateReportGroupRequestPrivate : public CodeBuildRequestPrivate {

public:
    CreateReportGroupRequestPrivate(const CodeBuildRequest::Action action,
                                   CreateReportGroupRequest * const q);
    CreateReportGroupRequestPrivate(const CreateReportGroupRequestPrivate &other,
                                   CreateReportGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReportGroupRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
