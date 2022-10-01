// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBSERVABILITYCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEOBSERVABILITYCONFIGURATIONREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeObservabilityConfigurationRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DescribeObservabilityConfigurationRequest : public AppRunnerRequest {

public:
    DescribeObservabilityConfigurationRequest(const DescribeObservabilityConfigurationRequest &other);
    DescribeObservabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeObservabilityConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
