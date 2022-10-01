// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCAPACITYRESERVATIONRESPONSE_H
#define QTAWS_MODIFYCAPACITYRESERVATIONRESPONSE_H

#include "ec2response.h"
#include "modifycapacityreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyCapacityReservationResponsePrivate;

class QTAWSEC2_EXPORT ModifyCapacityReservationResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyCapacityReservationResponse(const ModifyCapacityReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyCapacityReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCapacityReservationResponse)
    Q_DISABLE_COPY(ModifyCapacityReservationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
