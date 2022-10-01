// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETGROUPSREQUEST_P_H
#define QTAWS_LISTDATASETGROUPSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listdatasetgroupsrequest.h"

namespace QtAws {
namespace Personalize {

class ListDatasetGroupsRequest;

class ListDatasetGroupsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListDatasetGroupsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListDatasetGroupsRequest * const q);
    ListDatasetGroupsRequestPrivate(const ListDatasetGroupsRequestPrivate &other,
                                   ListDatasetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetGroupsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
