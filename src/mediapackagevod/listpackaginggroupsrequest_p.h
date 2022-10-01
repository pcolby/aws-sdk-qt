// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGINGGROUPSREQUEST_P_H
#define QTAWS_LISTPACKAGINGGROUPSREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "listpackaginggroupsrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ListPackagingGroupsRequest;

class ListPackagingGroupsRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    ListPackagingGroupsRequestPrivate(const MediaPackageVodRequest::Action action,
                                   ListPackagingGroupsRequest * const q);
    ListPackagingGroupsRequestPrivate(const ListPackagingGroupsRequestPrivate &other,
                                   ListPackagingGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackagingGroupsRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
