// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDPOLICIESREQUEST_P_H
#define QTAWS_LISTATTACHEDPOLICIESREQUEST_P_H

#include "iotrequest_p.h"
#include "listattachedpoliciesrequest.h"

namespace QtAws {
namespace IoT {

class ListAttachedPoliciesRequest;

class ListAttachedPoliciesRequestPrivate : public IoTRequestPrivate {

public:
    ListAttachedPoliciesRequestPrivate(const IoTRequest::Action action,
                                   ListAttachedPoliciesRequest * const q);
    ListAttachedPoliciesRequestPrivate(const ListAttachedPoliciesRequestPrivate &other,
                                   ListAttachedPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttachedPoliciesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
