// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCAPACITYRESERVATIONFLEETSREQUEST_H
#define QTAWS_CANCELCAPACITYRESERVATIONFLEETSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CancelCapacityReservationFleetsRequestPrivate;

class QTAWSEC2_EXPORT CancelCapacityReservationFleetsRequest : public Ec2Request {

public:
    CancelCapacityReservationFleetsRequest(const CancelCapacityReservationFleetsRequest &other);
    CancelCapacityReservationFleetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelCapacityReservationFleetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
