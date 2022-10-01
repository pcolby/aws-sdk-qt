// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATENOTIFICATIONCONFIGURATIONREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateNotificationConfigurationRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT UpdateNotificationConfigurationRequest : public KinesisVideoRequest {

public:
    UpdateNotificationConfigurationRequest(const UpdateNotificationConfigurationRequest &other);
    UpdateNotificationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotificationConfigurationRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
