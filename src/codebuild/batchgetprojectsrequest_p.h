// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPROJECTSREQUEST_P_H
#define QTAWS_BATCHGETPROJECTSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "batchgetprojectsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetProjectsRequest;

class BatchGetProjectsRequestPrivate : public CodeBuildRequestPrivate {

public:
    BatchGetProjectsRequestPrivate(const CodeBuildRequest::Action action,
                                   BatchGetProjectsRequest * const q);
    BatchGetProjectsRequestPrivate(const BatchGetProjectsRequestPrivate &other,
                                   BatchGetProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetProjectsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
