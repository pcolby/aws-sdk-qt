// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCAPACITYRESERVATIONREQUEST_H
#define QTAWS_CANCELCAPACITYRESERVATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CancelCapacityReservationRequestPrivate;

class QTAWSEC2_EXPORT CancelCapacityReservationRequest : public Ec2Request {

public:
    CancelCapacityReservationRequest(const CancelCapacityReservationRequest &other);
    CancelCapacityReservationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelCapacityReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
