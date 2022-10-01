// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEAUTOSCALINGCONFIGURATIONRESPONSE_H

#include "apprunnerresponse.h"
#include "describeautoscalingconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeAutoScalingConfigurationResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DescribeAutoScalingConfigurationResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DescribeAutoScalingConfigurationResponse(const DescribeAutoScalingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutoScalingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingConfigurationResponse)
    Q_DISABLE_COPY(DescribeAutoScalingConfigurationResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
