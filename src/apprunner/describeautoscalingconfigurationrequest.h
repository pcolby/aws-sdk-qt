// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEAUTOSCALINGCONFIGURATIONREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeAutoScalingConfigurationRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DescribeAutoScalingConfigurationRequest : public AppRunnerRequest {

public:
    DescribeAutoScalingConfigurationRequest(const DescribeAutoScalingConfigurationRequest &other);
    DescribeAutoScalingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
