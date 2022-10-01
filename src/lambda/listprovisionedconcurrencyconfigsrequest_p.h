// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDCONCURRENCYCONFIGSREQUEST_P_H
#define QTAWS_LISTPROVISIONEDCONCURRENCYCONFIGSREQUEST_P_H

#include "lambdarequest_p.h"
#include "listprovisionedconcurrencyconfigsrequest.h"

namespace QtAws {
namespace Lambda {

class ListProvisionedConcurrencyConfigsRequest;

class ListProvisionedConcurrencyConfigsRequestPrivate : public LambdaRequestPrivate {

public:
    ListProvisionedConcurrencyConfigsRequestPrivate(const LambdaRequest::Action action,
                                   ListProvisionedConcurrencyConfigsRequest * const q);
    ListProvisionedConcurrencyConfigsRequestPrivate(const ListProvisionedConcurrencyConfigsRequestPrivate &other,
                                   ListProvisionedConcurrencyConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProvisionedConcurrencyConfigsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
