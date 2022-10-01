// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDCONCURRENCYCONFIGSRESPONSE_H
#define QTAWS_LISTPROVISIONEDCONCURRENCYCONFIGSRESPONSE_H

#include "lambdaresponse.h"
#include "listprovisionedconcurrencyconfigsrequest.h"

namespace QtAws {
namespace Lambda {

class ListProvisionedConcurrencyConfigsResponsePrivate;

class QTAWSLAMBDA_EXPORT ListProvisionedConcurrencyConfigsResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListProvisionedConcurrencyConfigsResponse(const ListProvisionedConcurrencyConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProvisionedConcurrencyConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisionedConcurrencyConfigsResponse)
    Q_DISABLE_COPY(ListProvisionedConcurrencyConfigsResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
