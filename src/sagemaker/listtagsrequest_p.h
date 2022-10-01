// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSREQUEST_P_H
#define QTAWS_LISTTAGSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listtagsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTagsRequest;

class ListTagsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListTagsRequestPrivate(const SageMakerRequest::Action action,
                                   ListTagsRequest * const q);
    ListTagsRequestPrivate(const ListTagsRequestPrivate &other,
                                   ListTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
