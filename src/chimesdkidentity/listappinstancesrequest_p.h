// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCESREQUEST_P_H
#define QTAWS_LISTAPPINSTANCESREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "listappinstancesrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstancesRequest;

class ListAppInstancesRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    ListAppInstancesRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   ListAppInstancesRequest * const q);
    ListAppInstancesRequestPrivate(const ListAppInstancesRequestPrivate &other,
                                   ListAppInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppInstancesRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
