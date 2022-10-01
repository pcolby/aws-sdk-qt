// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBNETCIDRRESERVATIONSRESPONSE_H
#define QTAWS_GETSUBNETCIDRRESERVATIONSRESPONSE_H

#include "ec2response.h"
#include "getsubnetcidrreservationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetSubnetCidrReservationsResponsePrivate;

class QTAWSEC2_EXPORT GetSubnetCidrReservationsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetSubnetCidrReservationsResponse(const GetSubnetCidrReservationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSubnetCidrReservationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubnetCidrReservationsResponse)
    Q_DISABLE_COPY(GetSubnetCidrReservationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
