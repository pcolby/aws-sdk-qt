// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGENTSTATUSESREQUEST_P_H
#define QTAWS_LISTAGENTSTATUSESREQUEST_P_H

#include "connectrequest_p.h"
#include "listagentstatusesrequest.h"

namespace QtAws {
namespace Connect {

class ListAgentStatusesRequest;

class ListAgentStatusesRequestPrivate : public ConnectRequestPrivate {

public:
    ListAgentStatusesRequestPrivate(const ConnectRequest::Action action,
                                   ListAgentStatusesRequest * const q);
    ListAgentStatusesRequestPrivate(const ListAgentStatusesRequestPrivate &other,
                                   ListAgentStatusesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAgentStatusesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
