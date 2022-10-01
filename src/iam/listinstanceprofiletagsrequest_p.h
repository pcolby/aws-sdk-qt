// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILETAGSREQUEST_P_H
#define QTAWS_LISTINSTANCEPROFILETAGSREQUEST_P_H

#include "iamrequest_p.h"
#include "listinstanceprofiletagsrequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfileTagsRequest;

class ListInstanceProfileTagsRequestPrivate : public IamRequestPrivate {

public:
    ListInstanceProfileTagsRequestPrivate(const IamRequest::Action action,
                                   ListInstanceProfileTagsRequest * const q);
    ListInstanceProfileTagsRequestPrivate(const ListInstanceProfileTagsRequestPrivate &other,
                                   ListInstanceProfileTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceProfileTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
