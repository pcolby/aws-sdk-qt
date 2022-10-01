// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBUILDBATCHREQUEST_P_H
#define QTAWS_STARTBUILDBATCHREQUEST_P_H

#include "codebuildrequest_p.h"
#include "startbuildbatchrequest.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildBatchRequest;

class StartBuildBatchRequestPrivate : public CodeBuildRequestPrivate {

public:
    StartBuildBatchRequestPrivate(const CodeBuildRequest::Action action,
                                   StartBuildBatchRequest * const q);
    StartBuildBatchRequestPrivate(const StartBuildBatchRequestPrivate &other,
                                   StartBuildBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBuildBatchRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
