// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONAGGREGATORSOURCESSTATUSRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONAGGREGATORSOURCESSTATUSRESPONSE_H

#include "configserviceresponse.h"
#include "describeconfigurationaggregatorsourcesstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationAggregatorSourcesStatusResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigurationAggregatorSourcesStatusResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConfigurationAggregatorSourcesStatusResponse(const DescribeConfigurationAggregatorSourcesStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationAggregatorSourcesStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationAggregatorSourcesStatusResponse)
    Q_DISABLE_COPY(DescribeConfigurationAggregatorSourcesStatusResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
