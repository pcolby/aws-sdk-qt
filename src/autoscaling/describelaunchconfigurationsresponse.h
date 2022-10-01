// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBELAUNCHCONFIGURATIONSRESPONSE_H

#include "autoscalingresponse.h"
#include "describelaunchconfigurationsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLaunchConfigurationsResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLaunchConfigurationsResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeLaunchConfigurationsResponse(const DescribeLaunchConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLaunchConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLaunchConfigurationsResponse)
    Q_DISABLE_COPY(DescribeLaunchConfigurationsResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
