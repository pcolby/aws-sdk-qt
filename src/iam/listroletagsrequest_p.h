// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLETAGSREQUEST_P_H
#define QTAWS_LISTROLETAGSREQUEST_P_H

#include "iamrequest_p.h"
#include "listroletagsrequest.h"

namespace QtAws {
namespace Iam {

class ListRoleTagsRequest;

class ListRoleTagsRequestPrivate : public IamRequestPrivate {

public:
    ListRoleTagsRequestPrivate(const IamRequest::Action action,
                                   ListRoleTagsRequest * const q);
    ListRoleTagsRequestPrivate(const ListRoleTagsRequestPrivate &other,
                                   ListRoleTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoleTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
