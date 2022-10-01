// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHCONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBELAUNCHCONFIGURATIONSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLaunchConfigurationsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLaunchConfigurationsRequest : public AutoScalingRequest {

public:
    DescribeLaunchConfigurationsRequest(const DescribeLaunchConfigurationsRequest &other);
    DescribeLaunchConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLaunchConfigurationsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
