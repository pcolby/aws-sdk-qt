// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMISSIONPROFILERESPONSE_H
#define QTAWS_UPDATEMISSIONPROFILERESPONSE_H

#include "groundstationresponse.h"
#include "updatemissionprofilerequest.h"

namespace QtAws {
namespace GroundStation {

class UpdateMissionProfileResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT UpdateMissionProfileResponse : public GroundStationResponse {
    Q_OBJECT

public:
    UpdateMissionProfileResponse(const UpdateMissionProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMissionProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMissionProfileResponse)
    Q_DISABLE_COPY(UpdateMissionProfileResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
