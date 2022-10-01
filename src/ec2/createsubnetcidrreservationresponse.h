// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETCIDRRESERVATIONRESPONSE_H
#define QTAWS_CREATESUBNETCIDRRESERVATIONRESPONSE_H

#include "ec2response.h"
#include "createsubnetcidrreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSubnetCidrReservationResponsePrivate;

class QTAWSEC2_EXPORT CreateSubnetCidrReservationResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateSubnetCidrReservationResponse(const CreateSubnetCidrReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSubnetCidrReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubnetCidrReservationResponse)
    Q_DISABLE_COPY(CreateSubnetCidrReservationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
