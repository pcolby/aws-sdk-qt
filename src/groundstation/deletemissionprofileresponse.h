// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMISSIONPROFILERESPONSE_H
#define QTAWS_DELETEMISSIONPROFILERESPONSE_H

#include "groundstationresponse.h"
#include "deletemissionprofilerequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteMissionProfileResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT DeleteMissionProfileResponse : public GroundStationResponse {
    Q_OBJECT

public:
    DeleteMissionProfileResponse(const DeleteMissionProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMissionProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMissionProfileResponse)
    Q_DISABLE_COPY(DeleteMissionProfileResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
