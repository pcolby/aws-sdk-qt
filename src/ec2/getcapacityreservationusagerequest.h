// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAPACITYRESERVATIONUSAGEREQUEST_H
#define QTAWS_GETCAPACITYRESERVATIONUSAGEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetCapacityReservationUsageRequestPrivate;

class QTAWSEC2_EXPORT GetCapacityReservationUsageRequest : public Ec2Request {

public:
    GetCapacityReservationUsageRequest(const GetCapacityReservationUsageRequest &other);
    GetCapacityReservationUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCapacityReservationUsageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
