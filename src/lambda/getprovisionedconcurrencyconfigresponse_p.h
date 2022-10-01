// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROVISIONEDCONCURRENCYCONFIGRESPONSE_P_H
#define QTAWS_GETPROVISIONEDCONCURRENCYCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetProvisionedConcurrencyConfigResponse;

class GetProvisionedConcurrencyConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetProvisionedConcurrencyConfigResponsePrivate(GetProvisionedConcurrencyConfigResponse * const q);

    void parseGetProvisionedConcurrencyConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProvisionedConcurrencyConfigResponse)
    Q_DISABLE_COPY(GetProvisionedConcurrencyConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
