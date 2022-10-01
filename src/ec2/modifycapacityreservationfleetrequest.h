// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCAPACITYRESERVATIONFLEETREQUEST_H
#define QTAWS_MODIFYCAPACITYRESERVATIONFLEETREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyCapacityReservationFleetRequestPrivate;

class QTAWSEC2_EXPORT ModifyCapacityReservationFleetRequest : public Ec2Request {

public:
    ModifyCapacityReservationFleetRequest(const ModifyCapacityReservationFleetRequest &other);
    ModifyCapacityReservationFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCapacityReservationFleetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
