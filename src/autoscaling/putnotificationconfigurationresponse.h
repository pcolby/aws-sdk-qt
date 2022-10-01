// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTNOTIFICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTNOTIFICATIONCONFIGURATIONRESPONSE_H

#include "autoscalingresponse.h"
#include "putnotificationconfigurationrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutNotificationConfigurationResponsePrivate;

class QTAWSAUTOSCALING_EXPORT PutNotificationConfigurationResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    PutNotificationConfigurationResponse(const PutNotificationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutNotificationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutNotificationConfigurationResponse)
    Q_DISABLE_COPY(PutNotificationConfigurationResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
