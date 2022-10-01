// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSATELLITERESPONSE_H
#define QTAWS_GETSATELLITERESPONSE_H

#include "groundstationresponse.h"
#include "getsatelliterequest.h"

namespace QtAws {
namespace GroundStation {

class GetSatelliteResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT GetSatelliteResponse : public GroundStationResponse {
    Q_OBJECT

public:
    GetSatelliteResponse(const GetSatelliteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSatelliteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSatelliteResponse)
    Q_DISABLE_COPY(GetSatelliteResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
