// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGAGGREGATIONREQUESTSRESPONSE_H
#define QTAWS_DESCRIBEPENDINGAGGREGATIONREQUESTSRESPONSE_H

#include "configserviceresponse.h"
#include "describependingaggregationrequestsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribePendingAggregationRequestsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribePendingAggregationRequestsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribePendingAggregationRequestsResponse(const DescribePendingAggregationRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePendingAggregationRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePendingAggregationRequestsResponse)
    Q_DISABLE_COPY(DescribePendingAggregationRequestsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
