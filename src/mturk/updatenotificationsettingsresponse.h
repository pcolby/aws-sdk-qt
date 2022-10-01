// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONSETTINGSRESPONSE_H
#define QTAWS_UPDATENOTIFICATIONSETTINGSRESPONSE_H

#include "mturkresponse.h"
#include "updatenotificationsettingsrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateNotificationSettingsResponsePrivate;

class QTAWSMTURK_EXPORT UpdateNotificationSettingsResponse : public MTurkResponse {
    Q_OBJECT

public:
    UpdateNotificationSettingsResponse(const UpdateNotificationSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNotificationSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotificationSettingsResponse)
    Q_DISABLE_COPY(UpdateNotificationSettingsResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
