// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYRESERVATIONFLEETREQUEST_H
#define QTAWS_CREATECAPACITYRESERVATIONFLEETREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateCapacityReservationFleetRequestPrivate;

class QTAWSEC2_EXPORT CreateCapacityReservationFleetRequest : public Ec2Request {

public:
    CreateCapacityReservationFleetRequest(const CreateCapacityReservationFleetRequest &other);
    CreateCapacityReservationFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCapacityReservationFleetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
