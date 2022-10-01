// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEGROUPSREQUEST_P_H
#define QTAWS_LISTINSTANCEGROUPSREQUEST_P_H

#include "emrrequest_p.h"
#include "listinstancegroupsrequest.h"

namespace QtAws {
namespace Emr {

class ListInstanceGroupsRequest;

class ListInstanceGroupsRequestPrivate : public EmrRequestPrivate {

public:
    ListInstanceGroupsRequestPrivate(const EmrRequest::Action action,
                                   ListInstanceGroupsRequest * const q);
    ListInstanceGroupsRequestPrivate(const ListInstanceGroupsRequestPrivate &other,
                                   ListInstanceGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceGroupsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
