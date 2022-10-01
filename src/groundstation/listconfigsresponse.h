// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGSRESPONSE_H
#define QTAWS_LISTCONFIGSRESPONSE_H

#include "groundstationresponse.h"
#include "listconfigsrequest.h"

namespace QtAws {
namespace GroundStation {

class ListConfigsResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT ListConfigsResponse : public GroundStationResponse {
    Q_OBJECT

public:
    ListConfigsResponse(const ListConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigsResponse)
    Q_DISABLE_COPY(ListConfigsResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
