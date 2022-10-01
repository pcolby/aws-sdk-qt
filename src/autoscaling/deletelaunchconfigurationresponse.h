// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHCONFIGURATIONRESPONSE_H
#define QTAWS_DELETELAUNCHCONFIGURATIONRESPONSE_H

#include "autoscalingresponse.h"
#include "deletelaunchconfigurationrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteLaunchConfigurationResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DeleteLaunchConfigurationResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DeleteLaunchConfigurationResponse(const DeleteLaunchConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLaunchConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchConfigurationResponse)
    Q_DISABLE_COPY(DeleteLaunchConfigurationResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
