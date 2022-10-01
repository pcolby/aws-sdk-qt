// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGAGGREGATIONREQUESTSREQUEST_H
#define QTAWS_DESCRIBEPENDINGAGGREGATIONREQUESTSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribePendingAggregationRequestsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribePendingAggregationRequestsRequest : public ConfigServiceRequest {

public:
    DescribePendingAggregationRequestsRequest(const DescribePendingAggregationRequestsRequest &other);
    DescribePendingAggregationRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePendingAggregationRequestsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
