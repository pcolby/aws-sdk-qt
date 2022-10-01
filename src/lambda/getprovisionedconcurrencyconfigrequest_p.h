// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROVISIONEDCONCURRENCYCONFIGREQUEST_P_H
#define QTAWS_GETPROVISIONEDCONCURRENCYCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "getprovisionedconcurrencyconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetProvisionedConcurrencyConfigRequest;

class GetProvisionedConcurrencyConfigRequestPrivate : public LambdaRequestPrivate {

public:
    GetProvisionedConcurrencyConfigRequestPrivate(const LambdaRequest::Action action,
                                   GetProvisionedConcurrencyConfigRequest * const q);
    GetProvisionedConcurrencyConfigRequestPrivate(const GetProvisionedConcurrencyConfigRequestPrivate &other,
                                   GetProvisionedConcurrencyConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProvisionedConcurrencyConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
