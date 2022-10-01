// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROVISIONEDCONCURRENCYCONFIGRESPONSE_H
#define QTAWS_PUTPROVISIONEDCONCURRENCYCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "putprovisionedconcurrencyconfigrequest.h"

namespace QtAws {
namespace Lambda {

class PutProvisionedConcurrencyConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT PutProvisionedConcurrencyConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    PutProvisionedConcurrencyConfigResponse(const PutProvisionedConcurrencyConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutProvisionedConcurrencyConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProvisionedConcurrencyConfigResponse)
    Q_DISABLE_COPY(PutProvisionedConcurrencyConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
