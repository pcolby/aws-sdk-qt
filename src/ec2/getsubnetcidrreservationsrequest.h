// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBNETCIDRRESERVATIONSREQUEST_H
#define QTAWS_GETSUBNETCIDRRESERVATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetSubnetCidrReservationsRequestPrivate;

class QTAWSEC2_EXPORT GetSubnetCidrReservationsRequest : public Ec2Request {

public:
    GetSubnetCidrReservationsRequest(const GetSubnetCidrReservationsRequest &other);
    GetSubnetCidrReservationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubnetCidrReservationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
