// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONEDCONCURRENCYCONFIGREQUEST_H
#define QTAWS_DELETEPROVISIONEDCONCURRENCYCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class DeleteProvisionedConcurrencyConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT DeleteProvisionedConcurrencyConfigRequest : public LambdaRequest {

public:
    DeleteProvisionedConcurrencyConfigRequest(const DeleteProvisionedConcurrencyConfigRequest &other);
    DeleteProvisionedConcurrencyConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisionedConcurrencyConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
