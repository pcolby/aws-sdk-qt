// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTACCOUNTCONNECTIONSREQUEST_P_H
#define QTAWS_LISTENVIRONMENTACCOUNTCONNECTIONSREQUEST_P_H

#include "protonrequest_p.h"
#include "listenvironmentaccountconnectionsrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentAccountConnectionsRequest;

class ListEnvironmentAccountConnectionsRequestPrivate : public ProtonRequestPrivate {

public:
    ListEnvironmentAccountConnectionsRequestPrivate(const ProtonRequest::Action action,
                                   ListEnvironmentAccountConnectionsRequest * const q);
    ListEnvironmentAccountConnectionsRequestPrivate(const ListEnvironmentAccountConnectionsRequestPrivate &other,
                                   ListEnvironmentAccountConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentAccountConnectionsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
