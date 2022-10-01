// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORPROJECTREQUEST_P_H
#define QTAWS_LISTTAGSFORPROJECTREQUEST_P_H

#include "codestarrequest_p.h"
#include "listtagsforprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class ListTagsForProjectRequest;

class ListTagsForProjectRequestPrivate : public CodeStarRequestPrivate {

public:
    ListTagsForProjectRequestPrivate(const CodeStarRequest::Action action,
                                   ListTagsForProjectRequest * const q);
    ListTagsForProjectRequestPrivate(const ListTagsForProjectRequestPrivate &other,
                                   ListTagsForProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
