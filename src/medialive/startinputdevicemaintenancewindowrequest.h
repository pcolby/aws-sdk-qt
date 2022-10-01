// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINPUTDEVICEMAINTENANCEWINDOWREQUEST_H
#define QTAWS_STARTINPUTDEVICEMAINTENANCEWINDOWREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class StartInputDeviceMaintenanceWindowRequestPrivate;

class QTAWSMEDIALIVE_EXPORT StartInputDeviceMaintenanceWindowRequest : public MediaLiveRequest {

public:
    StartInputDeviceMaintenanceWindowRequest(const StartInputDeviceMaintenanceWindowRequest &other);
    StartInputDeviceMaintenanceWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInputDeviceMaintenanceWindowRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
