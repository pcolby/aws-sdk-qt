// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTFLOWMODULESREQUEST_P_H
#define QTAWS_LISTCONTACTFLOWMODULESREQUEST_P_H

#include "connectrequest_p.h"
#include "listcontactflowmodulesrequest.h"

namespace QtAws {
namespace Connect {

class ListContactFlowModulesRequest;

class ListContactFlowModulesRequestPrivate : public ConnectRequestPrivate {

public:
    ListContactFlowModulesRequestPrivate(const ConnectRequest::Action action,
                                   ListContactFlowModulesRequest * const q);
    ListContactFlowModulesRequestPrivate(const ListContactFlowModulesRequestPrivate &other,
                                   ListContactFlowModulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContactFlowModulesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
