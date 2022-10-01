// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSFORPROJECTREQUEST_P_H
#define QTAWS_LISTBUILDSFORPROJECTREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listbuildsforprojectrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildsForProjectRequest;

class ListBuildsForProjectRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListBuildsForProjectRequestPrivate(const CodeBuildRequest::Action action,
                                   ListBuildsForProjectRequest * const q);
    ListBuildsForProjectRequestPrivate(const ListBuildsForProjectRequestPrivate &other,
                                   ListBuildsForProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBuildsForProjectRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
