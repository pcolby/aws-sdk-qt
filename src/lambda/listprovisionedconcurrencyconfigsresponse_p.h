// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDCONCURRENCYCONFIGSRESPONSE_P_H
#define QTAWS_LISTPROVISIONEDCONCURRENCYCONFIGSRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListProvisionedConcurrencyConfigsResponse;

class ListProvisionedConcurrencyConfigsResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListProvisionedConcurrencyConfigsResponsePrivate(ListProvisionedConcurrencyConfigsResponse * const q);

    void parseListProvisionedConcurrencyConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProvisionedConcurrencyConfigsResponse)
    Q_DISABLE_COPY(ListProvisionedConcurrencyConfigsResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
