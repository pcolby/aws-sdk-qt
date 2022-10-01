// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSUPPORTDATAEXPORTREQUEST_H
#define QTAWS_STARTSUPPORTDATAEXPORTREQUEST_H

#include "marketplacecommerceanalyticsrequest.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class StartSupportDataExportRequestPrivate;

class QTAWSMARKETPLACECOMMERCEANALYTICS_EXPORT StartSupportDataExportRequest : public MarketplaceCommerceAnalyticsRequest {

public:
    StartSupportDataExportRequest(const StartSupportDataExportRequest &other);
    StartSupportDataExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSupportDataExportRequest)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
