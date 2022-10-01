// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPOLICIESREQUEST_P_H
#define QTAWS_LISTOBJECTPOLICIESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listobjectpoliciesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectPoliciesRequest;

class ListObjectPoliciesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListObjectPoliciesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListObjectPoliciesRequest * const q);
    ListObjectPoliciesRequestPrivate(const ListObjectPoliciesRequestPrivate &other,
                                   ListObjectPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectPoliciesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
