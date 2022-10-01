// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYRESERVATIONFLEETRESPONSE_H
#define QTAWS_CREATECAPACITYRESERVATIONFLEETRESPONSE_H

#include "ec2response.h"
#include "createcapacityreservationfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCapacityReservationFleetResponsePrivate;

class QTAWSEC2_EXPORT CreateCapacityReservationFleetResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateCapacityReservationFleetResponse(const CreateCapacityReservationFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCapacityReservationFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCapacityReservationFleetResponse)
    Q_DISABLE_COPY(CreateCapacityReservationFleetResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
