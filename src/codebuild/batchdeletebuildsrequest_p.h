// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEBUILDSREQUEST_P_H
#define QTAWS_BATCHDELETEBUILDSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "batchdeletebuildsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchDeleteBuildsRequest;

class BatchDeleteBuildsRequestPrivate : public CodeBuildRequestPrivate {

public:
    BatchDeleteBuildsRequestPrivate(const CodeBuildRequest::Action action,
                                   BatchDeleteBuildsRequest * const q);
    BatchDeleteBuildsRequestPrivate(const BatchDeleteBuildsRequestPrivate &other,
                                   BatchDeleteBuildsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteBuildsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
