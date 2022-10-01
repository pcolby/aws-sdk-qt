// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHCONFIGURATIONRESPONSE_H
#define QTAWS_CREATELAUNCHCONFIGURATIONRESPONSE_H

#include "autoscalingresponse.h"
#include "createlaunchconfigurationrequest.h"

namespace QtAws {
namespace AutoScaling {

class CreateLaunchConfigurationResponsePrivate;

class QTAWSAUTOSCALING_EXPORT CreateLaunchConfigurationResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    CreateLaunchConfigurationResponse(const CreateLaunchConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLaunchConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchConfigurationResponse)
    Q_DISABLE_COPY(CreateLaunchConfigurationResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
