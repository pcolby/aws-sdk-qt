// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSUPPORTDATAEXPORTREQUEST_P_H
#define QTAWS_STARTSUPPORTDATAEXPORTREQUEST_P_H

#include "marketplacecommerceanalyticsrequest_p.h"
#include "startsupportdataexportrequest.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class StartSupportDataExportRequest;

class StartSupportDataExportRequestPrivate : public MarketplaceCommerceAnalyticsRequestPrivate {

public:
    StartSupportDataExportRequestPrivate(const MarketplaceCommerceAnalyticsRequest::Action action,
                                   StartSupportDataExportRequest * const q);
    StartSupportDataExportRequestPrivate(const StartSupportDataExportRequestPrivate &other,
                                   StartSupportDataExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSupportDataExportRequest)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
