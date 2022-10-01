// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCAPACITYRESERVATIONREQUEST_H
#define QTAWS_MODIFYCAPACITYRESERVATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyCapacityReservationRequestPrivate;

class QTAWSEC2_EXPORT ModifyCapacityReservationRequest : public Ec2Request {

public:
    ModifyCapacityReservationRequest(const ModifyCapacityReservationRequest &other);
    ModifyCapacityReservationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCapacityReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
