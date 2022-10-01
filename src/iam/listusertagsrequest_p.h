// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERTAGSREQUEST_P_H
#define QTAWS_LISTUSERTAGSREQUEST_P_H

#include "iamrequest_p.h"
#include "listusertagsrequest.h"

namespace QtAws {
namespace Iam {

class ListUserTagsRequest;

class ListUserTagsRequestPrivate : public IamRequestPrivate {

public:
    ListUserTagsRequestPrivate(const IamRequest::Action action,
                                   ListUserTagsRequest * const q);
    ListUserTagsRequestPrivate(const ListUserTagsRequestPrivate &other,
                                   ListUserTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
