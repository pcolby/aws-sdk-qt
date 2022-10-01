// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATASETREQUEST_H
#define QTAWS_GENERATEDATASETREQUEST_H

#include "marketplacecommerceanalyticsrequest.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class GenerateDataSetRequestPrivate;

class QTAWSMARKETPLACECOMMERCEANALYTICS_EXPORT GenerateDataSetRequest : public MarketplaceCommerceAnalyticsRequest {

public:
    GenerateDataSetRequest(const GenerateDataSetRequest &other);
    GenerateDataSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataSetRequest)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
