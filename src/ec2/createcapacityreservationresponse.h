// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYRESERVATIONRESPONSE_H
#define QTAWS_CREATECAPACITYRESERVATIONRESPONSE_H

#include "ec2response.h"
#include "createcapacityreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCapacityReservationResponsePrivate;

class QTAWSEC2_EXPORT CreateCapacityReservationResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateCapacityReservationResponse(const CreateCapacityReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCapacityReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCapacityReservationResponse)
    Q_DISABLE_COPY(CreateCapacityReservationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
