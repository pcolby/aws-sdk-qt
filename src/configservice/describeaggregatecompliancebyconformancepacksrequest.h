// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFORMANCEPACKSREQUEST_H
#define QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFORMANCEPACKSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregateComplianceByConformancePacksRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeAggregateComplianceByConformancePacksRequest : public ConfigServiceRequest {

public:
    DescribeAggregateComplianceByConformancePacksRequest(const DescribeAggregateComplianceByConformancePacksRequest &other);
    DescribeAggregateComplianceByConformancePacksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAggregateComplianceByConformancePacksRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
