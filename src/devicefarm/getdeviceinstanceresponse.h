// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEINSTANCERESPONSE_H
#define QTAWS_GETDEVICEINSTANCERESPONSE_H

#include "devicefarmresponse.h"
#include "getdeviceinstancerequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDeviceInstanceResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetDeviceInstanceResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetDeviceInstanceResponse(const GetDeviceInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceInstanceResponse)
    Q_DISABLE_COPY(GetDeviceInstanceResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
