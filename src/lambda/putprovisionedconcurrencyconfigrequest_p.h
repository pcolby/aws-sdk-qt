// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_P_H
#define QTAWS_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "putprovisionedconcurrencyconfigrequest.h"

namespace QtAws {
namespace Lambda {

class PutProvisionedConcurrencyConfigRequest;

class PutProvisionedConcurrencyConfigRequestPrivate : public LambdaRequestPrivate {

public:
    PutProvisionedConcurrencyConfigRequestPrivate(const LambdaRequest::Action action,
                                   PutProvisionedConcurrencyConfigRequest * const q);
    PutProvisionedConcurrencyConfigRequestPrivate(const PutProvisionedConcurrencyConfigRequestPrivate &other,
                                   PutProvisionedConcurrencyConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutProvisionedConcurrencyConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
