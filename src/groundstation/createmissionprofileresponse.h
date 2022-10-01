// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMISSIONPROFILERESPONSE_H
#define QTAWS_CREATEMISSIONPROFILERESPONSE_H

#include "groundstationresponse.h"
#include "createmissionprofilerequest.h"

namespace QtAws {
namespace GroundStation {

class CreateMissionProfileResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT CreateMissionProfileResponse : public GroundStationResponse {
    Q_OBJECT

public:
    CreateMissionProfileResponse(const CreateMissionProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMissionProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMissionProfileResponse)
    Q_DISABLE_COPY(CreateMissionProfileResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
