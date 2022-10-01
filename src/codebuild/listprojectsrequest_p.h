// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_P_H
#define QTAWS_LISTPROJECTSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listprojectsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListProjectsRequest;

class ListProjectsRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListProjectsRequestPrivate(const CodeBuildRequest::Action action,
                                   ListProjectsRequest * const q);
    ListProjectsRequestPrivate(const ListProjectsRequestPrivate &other,
                                   ListProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
