// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHRESOURCESREQUEST_P_H
#define QTAWS_SEARCHRESOURCESREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "searchresourcesrequest.h"

namespace QtAws {
namespace ResourceGroups {

class SearchResourcesRequest;

class SearchResourcesRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    SearchResourcesRequestPrivate(const ResourceGroupsRequest::Action action,
                                   SearchResourcesRequest * const q);
    SearchResourcesRequestPrivate(const SearchResourcesRequestPrivate &other,
                                   SearchResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchResourcesRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
