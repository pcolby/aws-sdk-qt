// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPORTSREQUEST_P_H
#define QTAWS_BATCHGETREPORTSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "batchgetreportsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetReportsRequest;

class BatchGetReportsRequestPrivate : public CodeBuildRequestPrivate {

public:
    BatchGetReportsRequestPrivate(const CodeBuildRequest::Action action,
                                   BatchGetReportsRequest * const q);
    BatchGetReportsRequestPrivate(const BatchGetReportsRequestPrivate &other,
                                   BatchGetReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetReportsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
