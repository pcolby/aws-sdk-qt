// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETCIDRRESERVATIONREQUEST_H
#define QTAWS_CREATESUBNETCIDRRESERVATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateSubnetCidrReservationRequestPrivate;

class QTAWSEC2_EXPORT CreateSubnetCidrReservationRequest : public Ec2Request {

public:
    CreateSubnetCidrReservationRequest(const CreateSubnetCidrReservationRequest &other);
    CreateSubnetCidrReservationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubnetCidrReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
