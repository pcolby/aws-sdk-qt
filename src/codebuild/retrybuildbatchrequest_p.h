// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYBUILDBATCHREQUEST_P_H
#define QTAWS_RETRYBUILDBATCHREQUEST_P_H

#include "codebuildrequest_p.h"
#include "retrybuildbatchrequest.h"

namespace QtAws {
namespace CodeBuild {

class RetryBuildBatchRequest;

class RetryBuildBatchRequestPrivate : public CodeBuildRequestPrivate {

public:
    RetryBuildBatchRequestPrivate(const CodeBuildRequest::Action action,
                                   RetryBuildBatchRequest * const q);
    RetryBuildBatchRequestPrivate(const RetryBuildBatchRequestPrivate &other,
                                   RetryBuildBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetryBuildBatchRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
