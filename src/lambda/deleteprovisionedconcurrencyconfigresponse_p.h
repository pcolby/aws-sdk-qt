// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONEDCONCURRENCYCONFIGRESPONSE_P_H
#define QTAWS_DELETEPROVISIONEDCONCURRENCYCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteProvisionedConcurrencyConfigResponse;

class DeleteProvisionedConcurrencyConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteProvisionedConcurrencyConfigResponsePrivate(DeleteProvisionedConcurrencyConfigResponse * const q);

    void parseDeleteProvisionedConcurrencyConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProvisionedConcurrencyConfigResponse)
    Q_DISABLE_COPY(DeleteProvisionedConcurrencyConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
