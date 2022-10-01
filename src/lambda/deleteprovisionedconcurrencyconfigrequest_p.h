// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONEDCONCURRENCYCONFIGREQUEST_P_H
#define QTAWS_DELETEPROVISIONEDCONCURRENCYCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "deleteprovisionedconcurrencyconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteProvisionedConcurrencyConfigRequest;

class DeleteProvisionedConcurrencyConfigRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteProvisionedConcurrencyConfigRequestPrivate(const LambdaRequest::Action action,
                                   DeleteProvisionedConcurrencyConfigRequest * const q);
    DeleteProvisionedConcurrencyConfigRequestPrivate(const DeleteProvisionedConcurrencyConfigRequestPrivate &other,
                                   DeleteProvisionedConcurrencyConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProvisionedConcurrencyConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
