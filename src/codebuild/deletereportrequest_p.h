// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTREQUEST_P_H
#define QTAWS_DELETEREPORTREQUEST_P_H

#include "codebuildrequest_p.h"
#include "deletereportrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteReportRequest;

class DeleteReportRequestPrivate : public CodeBuildRequestPrivate {

public:
    DeleteReportRequestPrivate(const CodeBuildRequest::Action action,
                                   DeleteReportRequest * const q);
    DeleteReportRequestPrivate(const DeleteReportRequestPrivate &other,
                                   DeleteReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReportRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
