// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_P_H
#define QTAWS_LISTPROJECTSREQUEST_P_H

#include "codestarrequest_p.h"
#include "listprojectsrequest.h"

namespace QtAws {
namespace CodeStar {

class ListProjectsRequest;

class ListProjectsRequestPrivate : public CodeStarRequestPrivate {

public:
    ListProjectsRequestPrivate(const CodeStarRequest::Action action,
                                   ListProjectsRequest * const q);
    ListProjectsRequestPrivate(const ListProjectsRequestPrivate &other,
                                   ListProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectsRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
