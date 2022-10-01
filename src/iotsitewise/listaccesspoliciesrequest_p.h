// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOLICIESREQUEST_P_H
#define QTAWS_LISTACCESSPOLICIESREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listaccesspoliciesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAccessPoliciesRequest;

class ListAccessPoliciesRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListAccessPoliciesRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListAccessPoliciesRequest * const q);
    ListAccessPoliciesRequestPrivate(const ListAccessPoliciesRequestPrivate &other,
                                   ListAccessPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessPoliciesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
