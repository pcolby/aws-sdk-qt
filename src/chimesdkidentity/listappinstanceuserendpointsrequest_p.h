// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERENDPOINTSREQUEST_P_H
#define QTAWS_LISTAPPINSTANCEUSERENDPOINTSREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "listappinstanceuserendpointsrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceUserEndpointsRequest;

class ListAppInstanceUserEndpointsRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    ListAppInstanceUserEndpointsRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   ListAppInstanceUserEndpointsRequest * const q);
    ListAppInstanceUserEndpointsRequestPrivate(const ListAppInstanceUserEndpointsRequestPrivate &other,
                                   ListAppInstanceUserEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceUserEndpointsRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
