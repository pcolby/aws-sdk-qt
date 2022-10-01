// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCESREQUEST_P_H
#define QTAWS_LISTSERVICEINSTANCESREQUEST_P_H

#include "protonrequest_p.h"
#include "listserviceinstancesrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceInstancesRequest;

class ListServiceInstancesRequestPrivate : public ProtonRequestPrivate {

public:
    ListServiceInstancesRequestPrivate(const ProtonRequest::Action action,
                                   ListServiceInstancesRequest * const q);
    ListServiceInstancesRequestPrivate(const ListServiceInstancesRequestPrivate &other,
                                   ListServiceInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceInstancesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
