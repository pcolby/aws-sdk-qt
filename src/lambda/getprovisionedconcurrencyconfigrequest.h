// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROVISIONEDCONCURRENCYCONFIGREQUEST_H
#define QTAWS_GETPROVISIONEDCONCURRENCYCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetProvisionedConcurrencyConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT GetProvisionedConcurrencyConfigRequest : public LambdaRequest {

public:
    GetProvisionedConcurrencyConfigRequest(const GetProvisionedConcurrencyConfigRequest &other);
    GetProvisionedConcurrencyConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProvisionedConcurrencyConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
