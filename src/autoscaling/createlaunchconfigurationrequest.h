// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHCONFIGURATIONREQUEST_H
#define QTAWS_CREATELAUNCHCONFIGURATIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class CreateLaunchConfigurationRequestPrivate;

class QTAWSAUTOSCALING_EXPORT CreateLaunchConfigurationRequest : public AutoScalingRequest {

public:
    CreateLaunchConfigurationRequest(const CreateLaunchConfigurationRequest &other);
    CreateLaunchConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchConfigurationRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
