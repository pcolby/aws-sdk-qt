// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSREQUEST_P_H
#define QTAWS_LISTTAGSREQUEST_P_H

#include "daxrequest_p.h"
#include "listtagsrequest.h"

namespace QtAws {
namespace Dax {

class ListTagsRequest;

class ListTagsRequestPrivate : public DaxRequestPrivate {

public:
    ListTagsRequestPrivate(const DaxRequest::Action action,
                                   ListTagsRequest * const q);
    ListTagsRequestPrivate(const ListTagsRequestPrivate &other,
                                   ListTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
