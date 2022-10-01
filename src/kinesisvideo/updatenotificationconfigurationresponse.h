// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATENOTIFICATIONCONFIGURATIONRESPONSE_H

#include "kinesisvideoresponse.h"
#include "updatenotificationconfigurationrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateNotificationConfigurationResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT UpdateNotificationConfigurationResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    UpdateNotificationConfigurationResponse(const UpdateNotificationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNotificationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotificationConfigurationResponse)
    Q_DISABLE_COPY(UpdateNotificationConfigurationResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
