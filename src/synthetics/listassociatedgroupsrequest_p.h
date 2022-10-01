// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDGROUPSREQUEST_P_H
#define QTAWS_LISTASSOCIATEDGROUPSREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "listassociatedgroupsrequest.h"

namespace QtAws {
namespace Synthetics {

class ListAssociatedGroupsRequest;

class ListAssociatedGroupsRequestPrivate : public SyntheticsRequestPrivate {

public:
    ListAssociatedGroupsRequestPrivate(const SyntheticsRequest::Action action,
                                   ListAssociatedGroupsRequest * const q);
    ListAssociatedGroupsRequestPrivate(const ListAssociatedGroupsRequestPrivate &other,
                                   ListAssociatedGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociatedGroupsRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
