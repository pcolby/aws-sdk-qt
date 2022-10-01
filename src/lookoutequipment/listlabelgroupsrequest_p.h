// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELGROUPSREQUEST_P_H
#define QTAWS_LISTLABELGROUPSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listlabelgroupsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListLabelGroupsRequest;

class ListLabelGroupsRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListLabelGroupsRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListLabelGroupsRequest * const q);
    ListLabelGroupsRequestPrivate(const ListLabelGroupsRequestPrivate &other,
                                   ListLabelGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLabelGroupsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
