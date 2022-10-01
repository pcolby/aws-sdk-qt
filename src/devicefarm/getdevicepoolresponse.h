// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOOLRESPONSE_H
#define QTAWS_GETDEVICEPOOLRESPONSE_H

#include "devicefarmresponse.h"
#include "getdevicepoolrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDevicePoolResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetDevicePoolResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetDevicePoolResponse(const GetDevicePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDevicePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicePoolResponse)
    Q_DISABLE_COPY(GetDevicePoolResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
