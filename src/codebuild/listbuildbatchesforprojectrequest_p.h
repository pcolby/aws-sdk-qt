// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDBATCHESFORPROJECTREQUEST_P_H
#define QTAWS_LISTBUILDBATCHESFORPROJECTREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listbuildbatchesforprojectrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildBatchesForProjectRequest;

class ListBuildBatchesForProjectRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListBuildBatchesForProjectRequestPrivate(const CodeBuildRequest::Action action,
                                   ListBuildBatchesForProjectRequest * const q);
    ListBuildBatchesForProjectRequestPrivate(const ListBuildBatchesForProjectRequestPrivate &other,
                                   ListBuildBatchesForProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBuildBatchesForProjectRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
