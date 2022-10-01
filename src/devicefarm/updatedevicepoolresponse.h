// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEPOOLRESPONSE_H
#define QTAWS_UPDATEDEVICEPOOLRESPONSE_H

#include "devicefarmresponse.h"
#include "updatedevicepoolrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateDevicePoolResponsePrivate;

class QTAWSDEVICEFARM_EXPORT UpdateDevicePoolResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    UpdateDevicePoolResponse(const UpdateDevicePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDevicePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDevicePoolResponse)
    Q_DISABLE_COPY(UpdateDevicePoolResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
