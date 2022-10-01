// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCAPACITYRESERVATIONFLEETSRESPONSE_H
#define QTAWS_CANCELCAPACITYRESERVATIONFLEETSRESPONSE_H

#include "ec2response.h"
#include "cancelcapacityreservationfleetsrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelCapacityReservationFleetsResponsePrivate;

class QTAWSEC2_EXPORT CancelCapacityReservationFleetsResponse : public Ec2Response {
    Q_OBJECT

public:
    CancelCapacityReservationFleetsResponse(const CancelCapacityReservationFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelCapacityReservationFleetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelCapacityReservationFleetsResponse)
    Q_DISABLE_COPY(CancelCapacityReservationFleetsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
