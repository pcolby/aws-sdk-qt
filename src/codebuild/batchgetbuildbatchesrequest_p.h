// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBUILDBATCHESREQUEST_P_H
#define QTAWS_BATCHGETBUILDBATCHESREQUEST_P_H

#include "codebuildrequest_p.h"
#include "batchgetbuildbatchesrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetBuildBatchesRequest;

class BatchGetBuildBatchesRequestPrivate : public CodeBuildRequestPrivate {

public:
    BatchGetBuildBatchesRequestPrivate(const CodeBuildRequest::Action action,
                                   BatchGetBuildBatchesRequest * const q);
    BatchGetBuildBatchesRequestPrivate(const BatchGetBuildBatchesRequestPrivate &other,
                                   BatchGetBuildBatchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetBuildBatchesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
