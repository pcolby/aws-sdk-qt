// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALPOLICIESREQUEST_P_H
#define QTAWS_LISTPRINCIPALPOLICIESREQUEST_P_H

#include "iotrequest_p.h"
#include "listprincipalpoliciesrequest.h"

namespace QtAws {
namespace IoT {

class ListPrincipalPoliciesRequest;

class ListPrincipalPoliciesRequestPrivate : public IoTRequestPrivate {

public:
    ListPrincipalPoliciesRequestPrivate(const IoTRequest::Action action,
                                   ListPrincipalPoliciesRequest * const q);
    ListPrincipalPoliciesRequestPrivate(const ListPrincipalPoliciesRequestPrivate &other,
                                   ListPrincipalPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPrincipalPoliciesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
