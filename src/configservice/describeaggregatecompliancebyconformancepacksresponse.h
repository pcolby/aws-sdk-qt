// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFORMANCEPACKSRESPONSE_H
#define QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFORMANCEPACKSRESPONSE_H

#include "configserviceresponse.h"
#include "describeaggregatecompliancebyconformancepacksrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregateComplianceByConformancePacksResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeAggregateComplianceByConformancePacksResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeAggregateComplianceByConformancePacksResponse(const DescribeAggregateComplianceByConformancePacksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAggregateComplianceByConformancePacksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAggregateComplianceByConformancePacksResponse)
    Q_DISABLE_COPY(DescribeAggregateComplianceByConformancePacksResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
