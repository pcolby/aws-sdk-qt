// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSUPPORTDATAEXPORTRESPONSE_P_H
#define QTAWS_STARTSUPPORTDATAEXPORTRESPONSE_P_H

#include "marketplacecommerceanalyticsresponse_p.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class StartSupportDataExportResponse;

class StartSupportDataExportResponsePrivate : public MarketplaceCommerceAnalyticsResponsePrivate {

public:

    explicit StartSupportDataExportResponsePrivate(StartSupportDataExportResponse * const q);

    void parseStartSupportDataExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSupportDataExportResponse)
    Q_DISABLE_COPY(StartSupportDataExportResponsePrivate)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
