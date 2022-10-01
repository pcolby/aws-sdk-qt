// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONSETTINGSRESPONSE_H
#define QTAWS_UPDATEAPPLICATIONSETTINGSRESPONSE_H

#include "pinpointresponse.h"
#include "updateapplicationsettingsrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApplicationSettingsResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateApplicationSettingsResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateApplicationSettingsResponse(const UpdateApplicationSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApplicationSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationSettingsResponse)
    Q_DISABLE_COPY(UpdateApplicationSettingsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
