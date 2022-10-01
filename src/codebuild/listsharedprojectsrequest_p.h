// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDPROJECTSREQUEST_P_H
#define QTAWS_LISTSHAREDPROJECTSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listsharedprojectsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSharedProjectsRequest;

class ListSharedProjectsRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListSharedProjectsRequestPrivate(const CodeBuildRequest::Action action,
                                   ListSharedProjectsRequest * const q);
    ListSharedProjectsRequestPrivate(const ListSharedProjectsRequestPrivate &other,
                                   ListSharedProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSharedProjectsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
