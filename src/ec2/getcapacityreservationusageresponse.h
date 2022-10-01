// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAPACITYRESERVATIONUSAGERESPONSE_H
#define QTAWS_GETCAPACITYRESERVATIONUSAGERESPONSE_H

#include "ec2response.h"
#include "getcapacityreservationusagerequest.h"

namespace QtAws {
namespace Ec2 {

class GetCapacityReservationUsageResponsePrivate;

class QTAWSEC2_EXPORT GetCapacityReservationUsageResponse : public Ec2Response {
    Q_OBJECT

public:
    GetCapacityReservationUsageResponse(const GetCapacityReservationUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCapacityReservationUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCapacityReservationUsageResponse)
    Q_DISABLE_COPY(GetCapacityReservationUsageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
