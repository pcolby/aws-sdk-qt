// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCAPACITYRESERVATIONFLEETRESPONSE_H
#define QTAWS_MODIFYCAPACITYRESERVATIONFLEETRESPONSE_H

#include "ec2response.h"
#include "modifycapacityreservationfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyCapacityReservationFleetResponsePrivate;

class QTAWSEC2_EXPORT ModifyCapacityReservationFleetResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyCapacityReservationFleetResponse(const ModifyCapacityReservationFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyCapacityReservationFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCapacityReservationFleetResponse)
    Q_DISABLE_COPY(ModifyCapacityReservationFleetResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
