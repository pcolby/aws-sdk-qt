// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONCONFIGURATIONREQUEST_H
#define QTAWS_DELETENOTIFICATIONCONFIGURATIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteNotificationConfigurationRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DeleteNotificationConfigurationRequest : public AutoScalingRequest {

public:
    DeleteNotificationConfigurationRequest(const DeleteNotificationConfigurationRequest &other);
    DeleteNotificationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationConfigurationRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
