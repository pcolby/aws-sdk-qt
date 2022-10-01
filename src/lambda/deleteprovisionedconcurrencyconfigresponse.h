// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONEDCONCURRENCYCONFIGRESPONSE_H
#define QTAWS_DELETEPROVISIONEDCONCURRENCYCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "deleteprovisionedconcurrencyconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteProvisionedConcurrencyConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteProvisionedConcurrencyConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteProvisionedConcurrencyConfigResponse(const DeleteProvisionedConcurrencyConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProvisionedConcurrencyConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisionedConcurrencyConfigResponse)
    Q_DISABLE_COPY(DeleteProvisionedConcurrencyConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
