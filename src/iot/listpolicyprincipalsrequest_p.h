// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYPRINCIPALSREQUEST_P_H
#define QTAWS_LISTPOLICYPRINCIPALSREQUEST_P_H

#include "iotrequest_p.h"
#include "listpolicyprincipalsrequest.h"

namespace QtAws {
namespace IoT {

class ListPolicyPrincipalsRequest;

class ListPolicyPrincipalsRequestPrivate : public IoTRequestPrivate {

public:
    ListPolicyPrincipalsRequestPrivate(const IoTRequest::Action action,
                                   ListPolicyPrincipalsRequest * const q);
    ListPolicyPrincipalsRequestPrivate(const ListPolicyPrincipalsRequestPrivate &other,
                                   ListPolicyPrincipalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPolicyPrincipalsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
