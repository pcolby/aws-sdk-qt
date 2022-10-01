// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOSCALINGCONFIGURATIONREQUEST_H
#define QTAWS_CREATEAUTOSCALINGCONFIGURATIONREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateAutoScalingConfigurationRequestPrivate;

class QTAWSAPPRUNNER_EXPORT CreateAutoScalingConfigurationRequest : public AppRunnerRequest {

public:
    CreateAutoScalingConfigurationRequest(const CreateAutoScalingConfigurationRequest &other);
    CreateAutoScalingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAutoScalingConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
