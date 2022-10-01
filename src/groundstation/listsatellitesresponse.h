// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSATELLITESRESPONSE_H
#define QTAWS_LISTSATELLITESRESPONSE_H

#include "groundstationresponse.h"
#include "listsatellitesrequest.h"

namespace QtAws {
namespace GroundStation {

class ListSatellitesResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT ListSatellitesResponse : public GroundStationResponse {
    Q_OBJECT

public:
    ListSatellitesResponse(const ListSatellitesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSatellitesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSatellitesResponse)
    Q_DISABLE_COPY(ListSatellitesResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
