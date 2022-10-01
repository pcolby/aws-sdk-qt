// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDCONCURRENCYCONFIGSREQUEST_H
#define QTAWS_LISTPROVISIONEDCONCURRENCYCONFIGSREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListProvisionedConcurrencyConfigsRequestPrivate;

class QTAWSLAMBDA_EXPORT ListProvisionedConcurrencyConfigsRequest : public LambdaRequest {

public:
    ListProvisionedConcurrencyConfigsRequest(const ListProvisionedConcurrencyConfigsRequest &other);
    ListProvisionedConcurrencyConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisionedConcurrencyConfigsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
