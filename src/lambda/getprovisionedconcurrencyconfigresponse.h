// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROVISIONEDCONCURRENCYCONFIGRESPONSE_H
#define QTAWS_GETPROVISIONEDCONCURRENCYCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "getprovisionedconcurrencyconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetProvisionedConcurrencyConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT GetProvisionedConcurrencyConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetProvisionedConcurrencyConfigResponse(const GetProvisionedConcurrencyConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProvisionedConcurrencyConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProvisionedConcurrencyConfigResponse)
    Q_DISABLE_COPY(GetProvisionedConcurrencyConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
