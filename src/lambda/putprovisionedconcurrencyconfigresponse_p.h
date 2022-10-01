// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROVISIONEDCONCURRENCYCONFIGRESPONSE_P_H
#define QTAWS_PUTPROVISIONEDCONCURRENCYCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class PutProvisionedConcurrencyConfigResponse;

class PutProvisionedConcurrencyConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit PutProvisionedConcurrencyConfigResponsePrivate(PutProvisionedConcurrencyConfigResponse * const q);

    void parsePutProvisionedConcurrencyConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutProvisionedConcurrencyConfigResponse)
    Q_DISABLE_COPY(PutProvisionedConcurrencyConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
