// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEINSTANCERESPONSE_H
#define QTAWS_UPDATEDEVICEINSTANCERESPONSE_H

#include "devicefarmresponse.h"
#include "updatedeviceinstancerequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateDeviceInstanceResponsePrivate;

class QTAWSDEVICEFARM_EXPORT UpdateDeviceInstanceResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    UpdateDeviceInstanceResponse(const UpdateDeviceInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeviceInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceInstanceResponse)
    Q_DISABLE_COPY(UpdateDeviceInstanceResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
