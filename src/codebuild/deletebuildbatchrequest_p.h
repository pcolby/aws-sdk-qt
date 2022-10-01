// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUILDBATCHREQUEST_P_H
#define QTAWS_DELETEBUILDBATCHREQUEST_P_H

#include "codebuildrequest_p.h"
#include "deletebuildbatchrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteBuildBatchRequest;

class DeleteBuildBatchRequestPrivate : public CodeBuildRequestPrivate {

public:
    DeleteBuildBatchRequestPrivate(const CodeBuildRequest::Action action,
                                   DeleteBuildBatchRequest * const q);
    DeleteBuildBatchRequestPrivate(const DeleteBuildBatchRequestPrivate &other,
                                   DeleteBuildBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBuildBatchRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
