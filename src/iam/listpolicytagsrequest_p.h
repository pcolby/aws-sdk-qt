// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYTAGSREQUEST_P_H
#define QTAWS_LISTPOLICYTAGSREQUEST_P_H

#include "iamrequest_p.h"
#include "listpolicytagsrequest.h"

namespace QtAws {
namespace Iam {

class ListPolicyTagsRequest;

class ListPolicyTagsRequestPrivate : public IamRequestPrivate {

public:
    ListPolicyTagsRequestPrivate(const IamRequest::Action action,
                                   ListPolicyTagsRequest * const q);
    ListPolicyTagsRequestPrivate(const ListPolicyTagsRequestPrivate &other,
                                   ListPolicyTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPolicyTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
