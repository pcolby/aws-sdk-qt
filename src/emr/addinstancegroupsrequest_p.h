// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDINSTANCEGROUPSREQUEST_P_H
#define QTAWS_ADDINSTANCEGROUPSREQUEST_P_H

#include "emrrequest_p.h"
#include "addinstancegroupsrequest.h"

namespace QtAws {
namespace Emr {

class AddInstanceGroupsRequest;

class AddInstanceGroupsRequestPrivate : public EmrRequestPrivate {

public:
    AddInstanceGroupsRequestPrivate(const EmrRequest::Action action,
                                   AddInstanceGroupsRequest * const q);
    AddInstanceGroupsRequestPrivate(const AddInstanceGroupsRequestPrivate &other,
                                   AddInstanceGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddInstanceGroupsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
