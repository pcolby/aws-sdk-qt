// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINPUTDEVICEMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_STARTINPUTDEVICEMAINTENANCEWINDOWRESPONSE_H

#include "medialiveresponse.h"
#include "startinputdevicemaintenancewindowrequest.h"

namespace QtAws {
namespace MediaLive {

class StartInputDeviceMaintenanceWindowResponsePrivate;

class QTAWSMEDIALIVE_EXPORT StartInputDeviceMaintenanceWindowResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    StartInputDeviceMaintenanceWindowResponse(const StartInputDeviceMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartInputDeviceMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInputDeviceMaintenanceWindowResponse)
    Q_DISABLE_COPY(StartInputDeviceMaintenanceWindowResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
