// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYRESERVATIONREQUEST_H
#define QTAWS_CREATECAPACITYRESERVATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateCapacityReservationRequestPrivate;

class QTAWSEC2_EXPORT CreateCapacityReservationRequest : public Ec2Request {

public:
    CreateCapacityReservationRequest(const CreateCapacityReservationRequest &other);
    CreateCapacityReservationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCapacityReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
