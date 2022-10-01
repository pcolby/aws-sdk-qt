// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONAGGREGATORSOURCESSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONAGGREGATORSOURCESSTATUSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationAggregatorSourcesStatusResponse;

class DescribeConfigurationAggregatorSourcesStatusResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConfigurationAggregatorSourcesStatusResponsePrivate(DescribeConfigurationAggregatorSourcesStatusResponse * const q);

    void parseDescribeConfigurationAggregatorSourcesStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationAggregatorSourcesStatusResponse)
    Q_DISABLE_COPY(DescribeConfigurationAggregatorSourcesStatusResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
