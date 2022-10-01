// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUNDSTATIONSRESPONSE_H
#define QTAWS_LISTGROUNDSTATIONSRESPONSE_H

#include "groundstationresponse.h"
#include "listgroundstationsrequest.h"

namespace QtAws {
namespace GroundStation {

class ListGroundStationsResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT ListGroundStationsResponse : public GroundStationResponse {
    Q_OBJECT

public:
    ListGroundStationsResponse(const ListGroundStationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroundStationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroundStationsResponse)
    Q_DISABLE_COPY(ListGroundStationsResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
