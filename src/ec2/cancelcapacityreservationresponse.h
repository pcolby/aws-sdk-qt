// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCAPACITYRESERVATIONRESPONSE_H
#define QTAWS_CANCELCAPACITYRESERVATIONRESPONSE_H

#include "ec2response.h"
#include "cancelcapacityreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelCapacityReservationResponsePrivate;

class QTAWSEC2_EXPORT CancelCapacityReservationResponse : public Ec2Response {
    Q_OBJECT

public:
    CancelCapacityReservationResponse(const CancelCapacityReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelCapacityReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelCapacityReservationResponse)
    Q_DISABLE_COPY(CancelCapacityReservationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
