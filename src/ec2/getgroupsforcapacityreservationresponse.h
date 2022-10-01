// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPSFORCAPACITYRESERVATIONRESPONSE_H
#define QTAWS_GETGROUPSFORCAPACITYRESERVATIONRESPONSE_H

#include "ec2response.h"
#include "getgroupsforcapacityreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class GetGroupsForCapacityReservationResponsePrivate;

class QTAWSEC2_EXPORT GetGroupsForCapacityReservationResponse : public Ec2Response {
    Q_OBJECT

public:
    GetGroupsForCapacityReservationResponse(const GetGroupsForCapacityReservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupsForCapacityReservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupsForCapacityReservationResponse)
    Q_DISABLE_COPY(GetGroupsForCapacityReservationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
