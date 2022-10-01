// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMISSIONPROFILESRESPONSE_H
#define QTAWS_LISTMISSIONPROFILESRESPONSE_H

#include "groundstationresponse.h"
#include "listmissionprofilesrequest.h"

namespace QtAws {
namespace GroundStation {

class ListMissionProfilesResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT ListMissionProfilesResponse : public GroundStationResponse {
    Q_OBJECT

public:
    ListMissionProfilesResponse(const ListMissionProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMissionProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMissionProfilesResponse)
    Q_DISABLE_COPY(ListMissionProfilesResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
