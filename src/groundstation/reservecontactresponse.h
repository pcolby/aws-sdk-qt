// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESERVECONTACTRESPONSE_H
#define QTAWS_RESERVECONTACTRESPONSE_H

#include "groundstationresponse.h"
#include "reservecontactrequest.h"

namespace QtAws {
namespace GroundStation {

class ReserveContactResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT ReserveContactResponse : public GroundStationResponse {
    Q_OBJECT

public:
    ReserveContactResponse(const ReserveContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReserveContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReserveContactResponse)
    Q_DISABLE_COPY(ReserveContactResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
