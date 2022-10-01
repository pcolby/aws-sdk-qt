// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETCIDRRESERVATIONREQUEST_H
#define QTAWS_DELETESUBNETCIDRRESERVATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteSubnetCidrReservationRequestPrivate;

class QTAWSEC2_EXPORT DeleteSubnetCidrReservationRequest : public Ec2Request {

public:
    DeleteSubnetCidrReservationRequest(const DeleteSubnetCidrReservationRequest &other);
    DeleteSubnetCidrReservationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubnetCidrReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
