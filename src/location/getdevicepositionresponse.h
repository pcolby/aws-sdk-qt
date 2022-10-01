// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOSITIONRESPONSE_H
#define QTAWS_GETDEVICEPOSITIONRESPONSE_H

#include "locationresponse.h"
#include "getdevicepositionrequest.h"

namespace QtAws {
namespace Location {

class GetDevicePositionResponsePrivate;

class QTAWSLOCATION_EXPORT GetDevicePositionResponse : public LocationResponse {
    Q_OBJECT

public:
    GetDevicePositionResponse(const GetDevicePositionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDevicePositionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicePositionResponse)
    Q_DISABLE_COPY(GetDevicePositionResponse)

};

} // namespace Location
} // namespace QtAws

#endif
