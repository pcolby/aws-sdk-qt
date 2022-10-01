// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_DELETENOTIFICATIONCONFIGURATIONRESPONSE_H

#include "autoscalingresponse.h"
#include "deletenotificationconfigurationrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteNotificationConfigurationResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DeleteNotificationConfigurationResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DeleteNotificationConfigurationResponse(const DeleteNotificationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNotificationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationConfigurationResponse)
    Q_DISABLE_COPY(DeleteNotificationConfigurationResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
