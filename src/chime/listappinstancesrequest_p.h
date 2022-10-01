// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCESREQUEST_P_H
#define QTAWS_LISTAPPINSTANCESREQUEST_P_H

#include "chimerequest_p.h"
#include "listappinstancesrequest.h"

namespace QtAws {
namespace Chime {

class ListAppInstancesRequest;

class ListAppInstancesRequestPrivate : public ChimeRequestPrivate {

public:
    ListAppInstancesRequestPrivate(const ChimeRequest::Action action,
                                   ListAppInstancesRequest * const q);
    ListAppInstancesRequestPrivate(const ListAppInstancesRequestPrivate &other,
                                   ListAppInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppInstancesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
