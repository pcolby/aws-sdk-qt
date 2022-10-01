// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATASETRESPONSE_P_H
#define QTAWS_GENERATEDATASETRESPONSE_P_H

#include "marketplacecommerceanalyticsresponse_p.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class GenerateDataSetResponse;

class GenerateDataSetResponsePrivate : public MarketplaceCommerceAnalyticsResponsePrivate {

public:

    explicit GenerateDataSetResponsePrivate(GenerateDataSetResponse * const q);

    void parseGenerateDataSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateDataSetResponse)
    Q_DISABLE_COPY(GenerateDataSetResponsePrivate)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
