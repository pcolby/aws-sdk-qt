// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETCIDRRESERVATIONRESPONSE_H
#define QTAWS_DELETESUBNETCIDRRESERVATIONRESPONSE_H

#include "ec2response.h"
#include "deletesubnetcidrreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteSubnetCidrReservationResponsePrivate;

class QTAWSEC2_EXPORT DeleteSubnetCidrReservationResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteSubnetCidrReservationResponse(const DeleteSubnetCidrReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSubnetCidrReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubnetCidrReservationResponse)
    Q_DISABLE_COPY(DeleteSubnetCidrReservationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
