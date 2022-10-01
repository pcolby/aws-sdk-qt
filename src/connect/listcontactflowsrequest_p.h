// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTFLOWSREQUEST_P_H
#define QTAWS_LISTCONTACTFLOWSREQUEST_P_H

#include "connectrequest_p.h"
#include "listcontactflowsrequest.h"

namespace QtAws {
namespace Connect {

class ListContactFlowsRequest;

class ListContactFlowsRequestPrivate : public ConnectRequestPrivate {

public:
    ListContactFlowsRequestPrivate(const ConnectRequest::Action action,
                                   ListContactFlowsRequest * const q);
    ListContactFlowsRequestPrivate(const ListContactFlowsRequestPrivate &other,
                                   ListContactFlowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContactFlowsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
