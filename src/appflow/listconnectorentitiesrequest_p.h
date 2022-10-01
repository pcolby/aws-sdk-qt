// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORENTITIESREQUEST_P_H
#define QTAWS_LISTCONNECTORENTITIESREQUEST_P_H

#include "appflowrequest_p.h"
#include "listconnectorentitiesrequest.h"

namespace QtAws {
namespace Appflow {

class ListConnectorEntitiesRequest;

class ListConnectorEntitiesRequestPrivate : public AppflowRequestPrivate {

public:
    ListConnectorEntitiesRequestPrivate(const AppflowRequest::Action action,
                                   ListConnectorEntitiesRequest * const q);
    ListConnectorEntitiesRequestPrivate(const ListConnectorEntitiesRequestPrivate &other,
                                   ListConnectorEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConnectorEntitiesRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
