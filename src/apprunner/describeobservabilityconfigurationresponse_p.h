// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBSERVABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEOBSERVABILITYCONFIGURATIONRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DescribeObservabilityConfigurationResponse;

class DescribeObservabilityConfigurationResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DescribeObservabilityConfigurationResponsePrivate(DescribeObservabilityConfigurationResponse * const q);

    void parseDescribeObservabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeObservabilityConfigurationResponse)
    Q_DISABLE_COPY(DescribeObservabilityConfigurationResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
