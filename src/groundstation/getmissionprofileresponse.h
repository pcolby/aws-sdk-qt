// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMISSIONPROFILERESPONSE_H
#define QTAWS_GETMISSIONPROFILERESPONSE_H

#include "groundstationresponse.h"
#include "getmissionprofilerequest.h"

namespace QtAws {
namespace GroundStation {

class GetMissionProfileResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT GetMissionProfileResponse : public GroundStationResponse {
    Q_OBJECT

public:
    GetMissionProfileResponse(const GetMissionProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMissionProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMissionProfileResponse)
    Q_DISABLE_COPY(GetMissionProfileResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
