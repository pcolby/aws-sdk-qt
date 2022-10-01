// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSRESPONSE_H
#define QTAWS_LISTCONTACTSRESPONSE_H

#include "groundstationresponse.h"
#include "listcontactsrequest.h"

namespace QtAws {
namespace GroundStation {

class ListContactsResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT ListContactsResponse : public GroundStationResponse {
    Q_OBJECT

public:
    ListContactsResponse(const ListContactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactsResponse)
    Q_DISABLE_COPY(ListContactsResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
