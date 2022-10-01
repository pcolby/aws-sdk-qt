// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALOUSLOGGROUPSREQUEST_P_H
#define QTAWS_LISTANOMALOUSLOGGROUPSREQUEST_P_H

#include "devopsgururequest_p.h"
#include "listanomalousloggroupsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListAnomalousLogGroupsRequest;

class ListAnomalousLogGroupsRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    ListAnomalousLogGroupsRequestPrivate(const DevOpsGuruRequest::Action action,
                                   ListAnomalousLogGroupsRequest * const q);
    ListAnomalousLogGroupsRequestPrivate(const ListAnomalousLogGroupsRequestPrivate &other,
                                   ListAnomalousLogGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnomalousLogGroupsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
