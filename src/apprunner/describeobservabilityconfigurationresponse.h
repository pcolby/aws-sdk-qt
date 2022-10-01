// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBSERVABILITYCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEOBSERVABILITYCONFIGURATIONRESPONSE_H

#include "apprunnerresponse.h"
#include "describeobservabilityconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeObservabilityConfigurationResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DescribeObservabilityConfigurationResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DescribeObservabilityConfigurationResponse(const DescribeObservabilityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeObservabilityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeObservabilityConfigurationResponse)
    Q_DISABLE_COPY(DescribeObservabilityConfigurationResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
