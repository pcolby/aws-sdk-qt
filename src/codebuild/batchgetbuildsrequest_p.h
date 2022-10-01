// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBUILDSREQUEST_P_H
#define QTAWS_BATCHGETBUILDSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "batchgetbuildsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetBuildsRequest;

class BatchGetBuildsRequestPrivate : public CodeBuildRequestPrivate {

public:
    BatchGetBuildsRequestPrivate(const CodeBuildRequest::Action action,
                                   BatchGetBuildsRequest * const q);
    BatchGetBuildsRequestPrivate(const BatchGetBuildsRequestPrivate &other,
                                   BatchGetBuildsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetBuildsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
