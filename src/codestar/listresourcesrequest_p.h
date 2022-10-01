// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESREQUEST_P_H
#define QTAWS_LISTRESOURCESREQUEST_P_H

#include "codestarrequest_p.h"
#include "listresourcesrequest.h"

namespace QtAws {
namespace CodeStar {

class ListResourcesRequest;

class ListResourcesRequestPrivate : public CodeStarRequestPrivate {

public:
    ListResourcesRequestPrivate(const CodeStarRequest::Action action,
                                   ListResourcesRequest * const q);
    ListResourcesRequestPrivate(const ListResourcesRequestPrivate &other,
                                   ListResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourcesRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
