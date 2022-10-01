// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONAGGREGATORSOURCESSTATUSREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONAGGREGATORSOURCESSTATUSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationAggregatorSourcesStatusRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigurationAggregatorSourcesStatusRequest : public ConfigServiceRequest {

public:
    DescribeConfigurationAggregatorSourcesStatusRequest(const DescribeConfigurationAggregatorSourcesStatusRequest &other);
    DescribeConfigurationAggregatorSourcesStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationAggregatorSourcesStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
