// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBUILDBATCHREQUEST_P_H
#define QTAWS_STOPBUILDBATCHREQUEST_P_H

#include "codebuildrequest_p.h"
#include "stopbuildbatchrequest.h"

namespace QtAws {
namespace CodeBuild {

class StopBuildBatchRequest;

class StopBuildBatchRequestPrivate : public CodeBuildRequestPrivate {

public:
    StopBuildBatchRequestPrivate(const CodeBuildRequest::Action action,
                                   StopBuildBatchRequest * const q);
    StopBuildBatchRequestPrivate(const StopBuildBatchRequestPrivate &other,
                                   StopBuildBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopBuildBatchRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
