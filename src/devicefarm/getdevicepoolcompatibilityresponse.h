// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOOLCOMPATIBILITYRESPONSE_H
#define QTAWS_GETDEVICEPOOLCOMPATIBILITYRESPONSE_H

#include "devicefarmresponse.h"
#include "getdevicepoolcompatibilityrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDevicePoolCompatibilityResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetDevicePoolCompatibilityResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetDevicePoolCompatibilityResponse(const GetDevicePoolCompatibilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDevicePoolCompatibilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicePoolCompatibilityResponse)
    Q_DISABLE_COPY(GetDevicePoolCompatibilityResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
