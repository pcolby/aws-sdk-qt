// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATASETREQUEST_P_H
#define QTAWS_GENERATEDATASETREQUEST_P_H

#include "marketplacecommerceanalyticsrequest_p.h"
#include "generatedatasetrequest.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class GenerateDataSetRequest;

class GenerateDataSetRequestPrivate : public MarketplaceCommerceAnalyticsRequestPrivate {

public:
    GenerateDataSetRequestPrivate(const MarketplaceCommerceAnalyticsRequest::Action action,
                                   GenerateDataSetRequest * const q);
    GenerateDataSetRequestPrivate(const GenerateDataSetRequestPrivate &other,
                                   GenerateDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateDataSetRequest)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
