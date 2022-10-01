// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H
#define QTAWS_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class PutProvisionedConcurrencyConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT PutProvisionedConcurrencyConfigRequest : public LambdaRequest {

public:
    PutProvisionedConcurrencyConfigRequest(const PutProvisionedConcurrencyConfigRequest &other);
    PutProvisionedConcurrencyConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProvisionedConcurrencyConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
