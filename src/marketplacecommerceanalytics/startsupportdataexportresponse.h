// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSUPPORTDATAEXPORTRESPONSE_H
#define QTAWS_STARTSUPPORTDATAEXPORTRESPONSE_H

#include "marketplacecommerceanalyticsresponse.h"
#include "startsupportdataexportrequest.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class StartSupportDataExportResponsePrivate;

class QTAWSMARKETPLACECOMMERCEANALYTICS_EXPORT StartSupportDataExportResponse : public MarketplaceCommerceAnalyticsResponse {
    Q_OBJECT

public:
    StartSupportDataExportResponse(const StartSupportDataExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSupportDataExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSupportDataExportResponse)
    Q_DISABLE_COPY(StartSupportDataExportResponse)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
