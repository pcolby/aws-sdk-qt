// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSREQUEST_P_H
#define QTAWS_LISTGROUPSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listgroupsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListGroupsRequest;

class ListGroupsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListGroupsRequestPrivate(const GreengrassRequest::Action action,
                                   ListGroupsRequest * const q);
    ListGroupsRequestPrivate(const ListGroupsRequestPrivate &other,
                                   ListGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
