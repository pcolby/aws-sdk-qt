// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSREQUEST_P_H
#define QTAWS_LISTTAGSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listtagsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListTagsRequest;

class ListTagsRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListTagsRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListTagsRequest * const q);
    ListTagsRequestPrivate(const ListTagsRequestPrivate &other,
                                   ListTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
